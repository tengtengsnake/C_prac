#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i=1;
    while(i<=9)
    {
        int j=1;
        while (j<=9)
        {
            printf("%d*%d=%d\n",i,j,i*j);
            j++;
        }
        i++;
    }
    return 0;
}