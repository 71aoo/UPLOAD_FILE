#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sp
{
	char cph[9], rq[11], lx[9];
};

int main(void)
{
	FILE *fp;
	struct sp ss;
	int n = 0;
	char a1[9];

	printf("������Ҫ���ҵ�Υ�����ͣ�");
	gets(a1);
	fp = fopen("jtwz.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ������ļ�����·���Ƿ���ȷ���ļ��Ƿ���ڣ�");
		exit(1);
	}
	printf("\n���ҽ��Ϊ��\n");
	while (!feof(fp))
	{
		if (fscanf(fp, "%s %s %s", ss.cph, ss.rq, ss.lx) == 3)
		{
			if (strcmp(a1, ss.lx) == 0)
			{
				n++;
				printf("%d %s, %s, %s\n", n, ss.cph, ss.rq, ss.lx);
			}
		}
	}
	if (n == 0)
	{
		printf("�ļ���û���ҵ���%s���ļ�¼\n", a1);
	}
	fclose(fp);

	return 0;
}