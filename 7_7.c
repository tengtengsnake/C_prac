#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i=1,fac=1,n;
    do
    {
        printf("pls input the n of factorial: \n");
        scanf("%d",&n);
    }while (n<=0);
    do
    {
        fac*=i++;
    }while (i<=n);
    
    printf("the value of n is %d,the final result is :%d\n",n,fac);
    
    
    
}