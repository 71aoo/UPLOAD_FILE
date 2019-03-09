#include <stdio.h>

#define N 20

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
void maxLie(int array[N][N], int hshu, int lshu);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int m, n;
	int hang, lie, juZhen[N][N];

	printf("Please input m and n:");
	scanf("%d%d", &m, &n);

	printf("Please input a juZhen(%d hang, %d lie):\n", m, n);
	for (hang = 0; hang < m; hang++)
	{
		for (lie = 0; lie < n; lie++)
		{
			scanf("%d", &juZhen[hang][lie]);
		}
	}
	puts("");

	/* �����ִ��빦�ܽ��飺�����û��Զ��庯���ҳ�ÿһ���ϵ����ֵ�����±겢��ʾ����ʽҪ����ʾ */	
	/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
	maxLie(juZhen, m, n);
	/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯���Ķ��壬��������) */
void maxLie(int array[N][N], int hshu, int lshu)
{
	int i, j, max, maxlie; //����max��������е����ֵ������maxlie������������ֵ���б�

	
	for (i=0; i<hshu; i++)
	{
		max = array[i][0]; //����i�еĵ�һ��Ԫ�ظ�������max
		maxlie = 0; //����i�е�һ��Ԫ�ص��б긳������maxlie
		/* ���ҵ�i�е����ֵ�����ֵ���б� */
		for (j=1; j<lshu; j++)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				maxlie = j;
			}
		}
		printf("The max value in line %d is %d\n", i, maxlie); //�����i�����ֵ�����б�
	}
}