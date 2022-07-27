#define BEGIN {
#define END } 
#define WORD "Think of all the things \
we've shared and seen.\n"
#define SQUARE n*n  //使用#deine 取代簡單函數 
int main(void)
BEGIN

	int a,b=3;
	int *ptr; //declare the pointer vaiable
	ptr=&a;
	printf("&a=%p,&ptr=%p,ptr=%p,*ptr=%d\n",&a,&ptr,ptr,*ptr);
	ptr=&b;
	printf("&b=%p,&ptr=%p,ptr=%p,*ptr=%d\n",&b,&ptr,ptr,*ptr);
	system("pause");
	return 0;	   
	
END
