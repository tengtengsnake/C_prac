//Hollow Square Pattern with Diagonal
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i,j;
	printf("please input a number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)  //row
	{
		for(j=1;j<=n;j++)  //col
		{
			if(i==1 || j==1 || i==n || j==n)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
