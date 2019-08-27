#include <stdio.h>

int main()
{
	int number=0;
	scanf("%d", &number);
	int number_rev = number%10*100+number%100/10*10+number/100;
	printf("%d",number_rev);
	
	return 0;
 } 
