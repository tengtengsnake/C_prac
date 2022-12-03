#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float num;

    printf("sizeof(2L)=%d\n",sizeof(2L));
    
    printf("sizeof(ch)=%d\n",sizeof(ch));
    printf("sizeof(num)=%d\n",sizeof(num));

    printf("sizeof(int)%d\n",sizeof(int));
    printf("sizeof(long)=%d\n",sizeof(long));
    printf("sizeof(short)%d\n",sizeof(short));

    return 0;

}