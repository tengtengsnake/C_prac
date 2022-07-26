#include<conio.h>
int main(void)
{	

	int i,j;
	fflush(stdin);
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			printf("%d*%d=%2d\n",i,j,i*j);
		}
	}
	system("pause");
	return 0;	   
	
}
