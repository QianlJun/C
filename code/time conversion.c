#include <stdio.h>
int main()
{
	int BJT = 0;
	
	scanf("%d",&BJT);
	int UTC = 0;
	
	if (BJT>=800){
		UTC = BJT - 800;
	} 
	else {
		UTC = 2400-(800-BJT/100*100)+BJT%100;
		//*100+2400-BJT ;
	}  
	printf("%d",UTC);
	return 0;
 } 
