#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char ch;
    while (ch!=17)
    {
        ch=getchar();
        printf("ASCII of ch=%d\n",ch);
        /* code */

    }
    printf("you had pressed the Ctrl+q\n");

    return 0;

    
}