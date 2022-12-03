//overflow occur
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    short sum,s=32767;

    sum=s+1;
    printf("s+1=%d\n",sum);

    sum=s+2;
    printf("s+2=%d\n",sum);

    return 0;
}