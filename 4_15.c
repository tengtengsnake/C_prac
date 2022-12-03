#include <stdio.h>
int main(void)
{
    char name[10];

    printf("What is your name: ");
    scanf("%s",name);
    printf("Hi,your name is %s",name);

    return 0;
}