#include <stdio.h>

/**
题目内容：
你的程序要读入一系列正整数数据，输入-1表示输入结束，-1本身不是输入的数据。程序输出读到的数据中的奇数和偶数的个数。
输入格式:
一系列正整数，整数的范围是（0,100000）。如果输入-1则表示输入结束。
输出格式：
两个整数，第一个整数表示读入数据中的奇数的个数，第二个整数表示读入数据中的偶数的个数。两个整数之间以空格分隔。

*/ 

int main()
{
	int digit=0;
	int odd=0;
	int even=0;
	do{
		if ( digit%2 == 0 ){
			even++;
		}else{
			odd++;
		}
		scanf("%d",&digit);
	}while (digit != -1);
	printf("%d %d",odd,even-1); 
	
	return 0;
}
