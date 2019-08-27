#include <stdio.h>

int main(void)
{
	int a;
	a = 6;
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(double)=%d\n",sizeof(double));
	printf("sizeof(a)=%d\n",sizeof(a));
	printf("变量a的地址为%p\n",&a);
	
	int b[10];
	printf("%p\n",&b);
	printf("%p\n",b);
	printf("%p\n",&b[0]);
	printf("%p\n",&b[1]);
	
	return 0;
 } 
