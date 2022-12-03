#include<stdio.h>
int main(void)
{   
    int sum=0;
    int i;
    for(i=1;i<11;i++)
    {
        sum+=i;
    }
    printf("the result is: %d",sum);

    return 0;
}