#include <stdio.h>
#include <math.h>

int main()
{
	int digit=0;
	scanf("%d",&digit); 
	int ret=0;
	int count=0;
	do{
		count++;
		if ( ((digit%10)%2==0 && (count%2==0)) || ((digit%10)%2!=0 && (count%2!=0)) ){
			ret= ret+1*pow(2,count-1);
		} else{
			ret= ret+0*pow(2,count-1);
		}	
		digit/=10;
//		count++;
	}while(digit>0); 
	printf("%d",ret);
//	printf("%d",count);
	
	return 0;
 } 
