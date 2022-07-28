#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i,j;
	printf("please input a number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)  //row
	{
		for(j=0;j<n;j++)  //col
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
