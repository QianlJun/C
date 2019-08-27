#include <stdio.h>

int main()
{
	int num=0;
	scanf("%d",&num);
	for (int i=1;i<=num;i+=2){
		if ( i<num-1 ){
			printf("%d ",i);
		} else {
			printf("%d",i);
		}
	}
	
	return 0;
}  
