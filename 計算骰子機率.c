#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{	
	int i=1,count=0;  //set the counter to count i
	for(int i;i<=10000;i++)
	{
		if((rand()%6+1)==3)
		{
			count++;
		}
	}
	printf("3點出現次數%d",count);
	printf("骰1w次出現三點機率%.3f ",(float)count/10000);
	system("pause");
	return 0;	   
	
}
