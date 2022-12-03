#include<stdio.h>

int main(void)
{
    int num;
    char str[10];

    printf("pls input a integer");
    scanf("%d",&num);
    printf("num=%d\n",num);
    
    fflush(stdin);
    printf("pls input a string");
    scanf(" %s",str);
    printf("str=%s\n",str);

    return 0;

}