#include <stdio.h>
#include <string.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=2, lineLen<=80, �������ڱ��к����Ӵ��롢���2�С��г�<=80�ַ�) */
int getInput(char String[]);
void copyStr(char String[], int m, char dst[]);

/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int m, i;
	char Str[128], dstStr[128];
	
	m = getInput(Str);
	printf("\nInput is: Str=%s   m=%d\n", Str, m);

	for (i=0; i<128; i++)
	{
		dstStr[i] = '\0';
	}
	copyStr(Str, m, dstStr);
	printf("\nResult is: %s\n", dstStr);
	
	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯���Ķ��壬��������) */
int getInput(char String[])
{
	int len, m;
	
	printf("please input a string: ");
	gets(String); //����һ���ַ���
	len = strlen(String); //�����ַ����ĳ��ȣ������ó��ȸ�������len
	/*������String�е��ַ�������Ϊ0���򱨴������¶�ȡ��ֱ������Ҫ��Ϊֹ*/
	while (0 == len)
	{
		printf("\nError Str, please input a string agagin: ");
		gets(String);
		len = strlen(String);
	}
	printf("please input m: ");
	scanf("%d", &m); //�Ӽ�������m
	/* ��mС��1��m��������String���ַ����ĳ��ȣ��򱨴������¶�ȡ��ֱ������Ҫ��Ϊֹ*/
	while (m < 1 || m > len)
	{
		printf("\nError m, please input m again: ");
		scanf("%d", &m);
	}

	return m;
}

/* �ú������ܣ�������String�е��ַ����ӵ�m���ַ���ʼ��ȫ���ַ����Ƶ�dstStr�� */
void copyStr(char String[], int m, char dst[])
{
	int i, j;

	for (i=m-1, j=0; String[i]!='\0'; i++, j++)
	{
		dst[j] = String[i];
	}
	dst[j] = '\0';
}