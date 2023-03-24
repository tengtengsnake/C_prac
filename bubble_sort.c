#include <stdio.h>
#include <stdlib.h>
#define max 5

void show(int a[]),bubble(int a[]);
int main(void)
{
	int a[max] = {5,3,2,4,1};
	printf("排序前\n");
	show(a);
	printf("經過氣泡排序後\n");
	bubble(a);
	show(a);
	return 0;
}
void show(int a[])
{
	for(int i=0;i<max;i++) // 時間複雜度是n+1次,但是i是執行n(max)次 
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
void bubble(int a[])
{
	int tmp;
	for(int i=1;i<max;i++) // 搜尋陣列n-1次 
	{
		for(int j=0;j<max-i;j++) // max-i的-i是扣掉已經移到最右邊的值 
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}
