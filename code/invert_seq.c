#include <stdio.h>

/**
题目内容：
逆序的三位数：
程序每次读入一个正三位数，然后输出逆序的数字。注意，当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。
提示：用%10可以得到个位数，用/100可以得到百位数...。将这样得到的三个数字合起来：百位*100+十位*10+个位，就得到了结果。
*/

int main()
{
	int digit=0;
	scanf("%d",&digit);
	int unit=digit%10;
	int ten=(digit/10)%10;
	int hund=digit/100;
	printf("%d\n",unit*100+ten*10+hund);
	
	return 0;
}
