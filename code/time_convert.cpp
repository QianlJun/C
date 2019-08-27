#include <stdio.h>

int main(void)
{
	int BJT=0;
	scanf("%d",&BJT);
	int unit_digit=BJT%10;
	int ten_digit=(BJT/10)%10;
	int hun_digit=(BJT/100)%10;
	int tho_digit=BJT/1000;
	int UTC=0;
	
	//printf("%d%d%d%d\n",tho_digit,hun_digit,ten_digit,unit_digit);
	if (BJT<10){
		UTC=2400+unit_digit-800;
	}
	if (BJT>=10 && BJT<=800){
		UTC=2400+BJT-800;
	}
	if (BJT>800){
		UTC=BJT-800;
	}
	printf("%d\n",UTC);
	
	return 0;
}

