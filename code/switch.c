#include <stdio.h>
int main()
{
	int type = 0;
	scanf("%d",&type);
	switch (type) {
		case 1:
			printf("你好");
			break;
		case 2:
			printf("早上好");
			break; 
		case 3:
			printf("中午好");
			break; 
	 	default:
	 		printf("啊，什么啊?");
	 		break;
	}
	return 0;
}
