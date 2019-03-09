#include <stdio.h>
#include <string.h>

#define N 128

void conj(char *string1, char *string2);

int main(void)
{
	char str1[N * 2], str2[N];

	printf("Please input string1:");
	gets(str1);
	printf("Please input string2:");
	gets(str2);

	/* �����ִ��빦�ܽ��飺���ú���conj()���str1��str2�ĺϲ� */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
	conj(str1, str2);
	/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	printf("\nstring1:%s\n", str1);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯��conj����������) */
void conj(char *string1, char *string2)
{
	int i, j;
	char string3[2 * N];

	/* ����forѭ�������ã��������ַ����ȳ����ֵ��ַ�������������string3�� */
	for (i = 0, j=0; string1[i] != '\0' && string2[i] != '\0'; i++)
	{
		string3[j] = string1[i];
		j++;
		string3[j] = string2[i];
		j++;
	}

	if (string1[i] != '\0') //�ַ���1û�н������ַ���2����
	{
		for (; string1[i] != '\0'; i++) //���ַ���1��ʣ����ַ����Ƶ�����string3�����ɵ��ַ�����
		{
			string3[j] = string1[i];
			j++;
		}
		string3[j] = '\0'; //�����ַ���������־'\0'
	}
	else if (string2[i] != '\0') //�ַ���2û�н������ַ���1����
	{
		for (; string2[i] != '\0'; i++) //���ַ���2��ʣ����ַ����Ƶ�����string3�����ɵ��ַ�����
		{
			string3[j] = string2[i];
			j++;
		}
		string3[j] = '\0'; //�����ַ���������־'\0'
	}
	else //�����ַ������Ѿ�����
	{
		string3[j] = '\0'; //�����ַ���������־'\0'
	}

	strcpy(string1, string3); //�������ɵ��ַ������Ƶ�string1��
}