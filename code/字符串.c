#include <stdio.h>
int main()
{
	char c;
	char d;
	c = 1;
	d = '1';
	scanf("%c",&c);  //����1 
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	printf("d=%c\n",d);
	
	if ( 49 == '1'){
		printf("yes\n");
	} 
	
	char a = 'A';
	a++;
	printf("%c\n",a);
	
	int i = 'Z'-'A';
	printf("%d\n",i);
	
	printf("%c\n",a+'a'-'A');   //��д��Сд 
	
	a = 'b';
	printf("%c\n",a+'A'-'a');	  //Сд���д 
	
	return 0;
}
