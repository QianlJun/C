int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��, "
		"������\" 5 7\"��ʾ5��7Ӣ��: ");
		
	double foot;
	double inch;
	
	scanf("%lf %lf", &foot,&inch);
	
	printf("�����%f��. \n",
		((foot + inch /12) * 0.3048));
		
	return 0;
	
}
