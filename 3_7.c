#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char beep='\a'; // \ called escape character,\+n=\n=escape sequence
    printf("%c",beep); //把控制碼印出來
    printf("ASCII of beep=%d",beep);

    return 0;
}