#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,count=0;
    for(i=1;i<=10000;i++)
    {
        if((rand()%6+1)==3)
            count++;
    }
    printf("the result is: %f\n",(float)count/10000);
}