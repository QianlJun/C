#include <stdio.h>

/**
��Ŀ���ݣ�

UTC������Э��ʱ��BJT�Ǳ���ʱ�䣬UTCʱ���൱��BJT��ȥ8�����ڣ���ĳ���Ҫ����һ����������ʾBJT��ʱ�ͷ֡������ĸ�λ��ʮλ��ʾ�֣���λ��ǧλ��ʾСʱ�����СʱС��10����û��ǧλ���֣����Сʱ��0����û�а�λ���֣����Сʱ����0����С��10�֣���Ҫ����ʮλ�ϵ�0�����Сʱ��0����С��10�ֵģ�����Ҫ����ʮλ�ϵ�0����1124��ʾ11��24�֣���905��ʾ9��5�֣�36��ʾ0��36�֣�7��ʾ0��7�֡�

��Ч�����뷶Χ��0��2359������ĳ��򲻿��ܴӲ��Է���������0��2359������������ݡ�

��ĳ���Ҫ������ʱ���Ӧ��UTCʱ�䣬����ĸ�ʽ���������ͬ�������һ����������ʾUTC��ʱ�ͷ֡������ĸ�λ��ʮλ��ʾ�֣���λ��ǧλ��ʾСʱ�����СʱС��10����û��ǧλ���֣����Сʱ��0����û�а�λ���֣����Сʱ����0����С��10�֣���Ҫ����ʮλ�ϵ�0�����Сʱ��0����С��10�ֵģ�����Ҫ����ʮλ�ϵ�0��

���ѣ�ҪС�Ŀ��յĻ��㡣
�����ʽ:

һ����������ʾBJT��ʱ�ͷ֡������ĸ�λ��ʮλ��ʾ�֣���λ��ǧλ��ʾСʱ�����СʱС��10����û��ǧλ���֣����Сʱ��0����û�а�λ���֣����Сʱ����0����С��10�֣���Ҫ����ʮλ�ϵ�0�����Сʱ��0����С��10�ֵģ�����Ҫ����ʮλ�ϵ�0��
�����ʽ��

һ����������ʾUTC��ʱ�ͷ֡������ĸ�λ��ʮλ��ʾ�֣���λ��ǧλ��ʾСʱ�����СʱС��10����û��ǧλ���֣����Сʱ��0����û�а�λ���֣����Сʱ����0����С��10�֣���Ҫ����ʮλ�ϵ�0�����Сʱ��0����С��10�ֵģ�����Ҫ����ʮλ�ϵ�0��
*/


int main(void)
{
	int BJT=0;
	scanf("%d",&BJT);
	int unit_digit=BJT%10;
	int ten_digit=(BJT/10)%10;
	int hun_digit=(BJT/100)%10;
	int tho_digit=BJT/1000;
	
	printf("%d%d%d%d\n",tho_digit,hun_digit,ten_digit,unit_digit);
	
	
	
	return 0;
}























