#include<conio.h>
#define BEGIN {
#define END } 
#define WORD "Think of all the things \
we've shared and seen.\n"
#define SQUARE n*n  //使用#deine 取代簡單函數 
int main(void)
BEGIN
	int a,b=5;
	double c=3.14;
	printf("a=%4d,sizeof(a)=%d,address is %p\n",a,sizeof(a),&a);
	printf("b=%4d,sizeof(b)=%d,address is %p\n",b,sizeof(b),&b);
	printf("c=%4d,sizeof(c)=%d,address is %p\n",c,sizeof(c),&c);
	system("pause");
	return 0;	   
	
END
