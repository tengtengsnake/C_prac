#include<stdio.h>

int main(void)
{
    int n1,n2;
    float num1=3.002F,num2=3.988F;

    n1=(int)num1;
    n2=(int)num2;

    printf("num1=%f,num2=%f\n",num1,num2);
    printf("n1=%d,n2=%d\n",n1,n2);
}