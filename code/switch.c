#include <stdio.h>
int main()
{
	int type = 0;
	scanf("%d",&type);
	switch (type) {
		case 1:
			printf("���");
			break;
		case 2:
			printf("���Ϻ�");
			break; 
		case 3:
			printf("�����");
			break; 
	 	default:
	 		printf("����ʲô��?");
	 		break;
	}
	return 0;
}
