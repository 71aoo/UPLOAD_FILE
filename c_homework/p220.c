/*
����Ĺ��ܣ�
	�Ӽ��̶���һ���ַ�(Լ�����ַ�����127�ֽ�)��
	ͳ�Ƽ�������е���ĸ�����֡��ո��
	�������ŵĸ�����
*/

#include <stdio.h>

int main(void)
{
	char str[128];
	int i, zimu = 0, shuzi = 0, kongge = 0, qita = 0;

	/* �Ӽ�������һ���ַ���ŵ�����str�� */
	printf("Please input string:");
	gets(str);

	/* ������str�н��ַ����ȡ���ж� */
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z')) //�ж��ַ��Ƿ���Сд��ĸ
		{
			zimu++;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z')) //�ж��ַ��Ƿ��Ǵ�д��ĸ
		{
			zimu++;
		}
		else if ((str[i] >= '0') && (str[i] <= '9')) //�ж��ַ��Ƿ��������ַ�
		{
			shuzi++;
		}
		else if (str[i] == ' ') //�ж��ַ��Ƿ��ǿո�
		{
			kongge++;
		}
		else  //�����ַ�
		{
			qita++;
		}

	}
	printf("zimu=%d,shuzi=%d,kongge=%d,qita=%d\n", zimu, shuzi, kongge, qita);

	return 0;
}