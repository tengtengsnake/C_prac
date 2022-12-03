#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,i=1,sum=0;
    do
    {
        printf("pls input n value(n>0):\n");
        scanf("%d",&n);
    } while (n<=0);

    do
    {
        sum+=i++;
    }while (i<=n);
    {
        printf("1+2+3+..._%d=%d\n",n,sum);
    }

    return 0;
    

    
}