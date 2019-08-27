#include <stdio.h>
#include <math.h>
int main()
{
	int number = 0;
	scanf("%d",&number);
	int count = 1;
	int sum = 0;
	int i = 0;
	if (number/10!=0){
	while ( number/10!=0 ){
		if ((number%10%2==0 && count%2==0) || (number%10%2!=0 && count%2!=0)){
			sum+=1*pow(2,i);
			number/=10;
			i+=1;
			count+=1;
		} 
		else {
			sum+=0*pow(2,i);
			number/=10;
			i+=1;
			count+=1;
		}
		
	}
	}else {
		if ((number%10%2==0 && count%2==0) || (number%10%2!=0 && count%2!=0)){
			sum = 1;
		} else {
			sum = 0;
		}
	}
	printf("%d",sum);
	
	return 0;
 } 
