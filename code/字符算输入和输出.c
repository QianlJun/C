#include <stdio.h>
int main(void)
{
	char word[8];   //只能输入7个字符 
	scanf("%7s",word);  //最多只读7个字符 
	printf("%s##\n",word);   //输入hello world  
	 
	return 0;
 } 
