#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2,larger;
    printf("pls input two integer: ");
    scanf("%d %d",&num1,&num2);

    num1>num2?(larger=num1):(larger=num2);
    printf("the larger is: %d\n",larger);
    return 0;
}