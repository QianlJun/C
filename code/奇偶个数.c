#include <stdio.h>
int main()
{
	int number =0 ;
	int odd = 0;
	int even = 0;
	scanf("%d",&number);
	
	while (number != -1){
	
		if (number%2==0 ){
			even+=1;
			scanf("%d",&number);
		} else {
			odd+=1;
			scanf("%d",&number);
		}
	}
	printf("%d %d",odd,even);
	return 0;
 } 
