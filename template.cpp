#include <iostream>
using namespace std;
// 有使用template的class
template <typename T>
class MPair
{
    T first_val, second_val;
public:
    MPair()
    {
        first_val = 0;
        second_val = 0;
    }
    MPair(T v1, T v2)
    {
        first_val = v1;
        second_val = v2;
    }
    void setV1(T v1);
    void setV2(T v2);
    T getV1();
    T getV2();
protected:
private:
};
template <typename T>
void MPair<T>::setV1(T v1)
{
    first_val = v1;
}
template <typename T>
void MPair<T>::setV2(T v2)
{
    second_val = v2;
}
template <typename T>
T MPair<T>::getV1()
{
    return first_val;
}
template <typename T>
T MPair<T>::getV2()
{
    return second_val;
}
template <typename T>
T calculate(MPair<T> obj)
{
    return obj.getV1()*obj.getV2(); 
}
int main(int argc, char **argv)
{
    MPair<int> p1, p2(10, 33), p3;
    p3.setV1(1);
    p3.setV2(-4);

    cout << calculate(p1) << calculate(p2);
    cout << p3.getV1() << p3.getV2() << calculate(p3) << endl;

    return 0;
}
