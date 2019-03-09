#include <stdio.h>
#include <string.h>

/* myswap����ַ���str���ݵķ�ת�������ַ���str�ĵ�ַ */
char *myswap(char *str);
/* merge����ַ���strA,strB˳�򽻲�ϲ���strC�������ַ���strC�ĵ�ַ */
char *merge(char *strA, char *strB, char *strC); 

int main(void)
{
	char s1[100], s2[100], s3[200];

	printf("Enter string s1: ");
	gets(s1);
	printf("Enter string s2: ");
	gets(s2);

	printf("\nstring s1 reversed: %s", myswap(s1));
	printf("\nstring s2 reversed: %s", myswap(s2));
	printf("\nstring s1,s2 merged: %s\n", merge(s1, s2, s3));

	return 0;
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
char *myswap(char *str)
{
	int i, temp, count;

	count = strlen(str);
	for (i=0; i < count/2; i++)
	{
		temp = str[i];
		str[i] = str[count-i-1];
		str[count-i-1] = temp;
	}
	return str;
}

char *merge(char *strA, char *strB, char *strC)
{
	int i, j;

	for (i=0, j=0; strA[i] && strB[i]; i++, j=j+2)
	{
		strC[j] = strA[i];
		strC[j+1] = strB[i];
	}
	if (strA[i] == '\0')
	{
		for (; strB[i]; i++, j++)
		{
			strC[j] = strB[i];
		}
	}
	else if (strB[i] == '\0')
	{
		for (; strA[i]; i++, j++)
		{
			strC[j] = strA[i];
		}
	}
	strC[j] = '\0';
	return strC;
}