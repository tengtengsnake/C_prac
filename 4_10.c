#include<stdio.h>

int main(void)
{
    int a,b;

    printf("pls input two integer: ");
    scanf("%d %d",&a,&b); //抓兩個記憶體位址來存要輸入的變數,注意這邊要以空白鍵隔開,他就會停下來等待
    printf("%d+%d=%d\n",a,b,a+b);

    return 0;
}