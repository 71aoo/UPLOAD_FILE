/*
����Ĺ��ܣ�
	�Ӽ�������һ�пɴ��ո���ַ���(Լ�����ַ�����127�ֽ�)��������������ַ�����
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	int i, len;

	printf("Input a string: ");
	gets(str); //�����ַ�����ŵ�����str�С�ע�⣺ʹ��gets������������ո���ַ�����scanf����

	len = strlen(str); //ʹ��strlen������������str������ŵ��ַ����ĳ��ȣ������ó��ȸ�������len

	printf("The result is: ");
	/* �����������str�е��ַ�����ע�⣺len-1���ַ������һ���ַ���λ��*/
	for (i=len-1; i>=0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}