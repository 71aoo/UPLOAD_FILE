#include<stdio.h>

#define MAXLINE 80

/* userCode(<80字符): 自定义函数之原型声明 */
char *strLianjie(char strall[], char *str);

int main(void)
{
	char str[2][MAXLINE+1], strall[2*MAXLINE+1]="", *pNew;

	printf("input 2 strings:\n");
	gets(str[0]);
	gets(str[1]);

	pNew = strLianjie(strLianjie(strall, str[0]), str[1]);
	printf("\nResult: %s\n", pNew);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
char *strLianjie(char strall[], char *str)
{
	int i;
	static int j=0, k;

	j++;
	for (i=0; *(str + i); i++)
	{
		strall[i] = *(str + i);
	}
	strall[i] = '\0';
	if (j == 1)
	{
		k = i;
	}
	if (j == 2)
	{
		return strall - k;
	}
	else
	{
		return strall + i;
	}
}