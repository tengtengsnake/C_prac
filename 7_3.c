#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i=1,sum=0;
    while(sum<100)
    {   
        i++;
        sum+=i;
        printf("from 1 accumulate to %2d=%2d\n",i,sum);

    }
    return 0;
}