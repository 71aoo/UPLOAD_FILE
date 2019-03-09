#include <stdio.h>

int statistic(int num[]);  /* userCode(<50�ַ�): �Զ��庯��1֮ԭ������ */
int search(int num[], int m, int n);  /* userCode(<50�ַ�): �Զ��庯��2֮ԭ������ */

int main(void)
{
	int num[100], n, min;
	
	printf("���������ɸ���: ");
	n = statistic(num);   /* userCode(<30�ַ�): ���ú����������ݵ�num�в�ͳ�Ƹ��� */

	min = search(num, 0, n);   /* userCode(<40�ַ�): ���ú������ҵ�0��n-1��������С�����±� */
	printf("\n��0��%d��������С����%d", n-1, num[min]);
	min = search(num, 3, n);   /* userCode(<40�ַ�): ���ú������ҵ�3��n-1��������С�����±� */
	printf("\n��3��%d��������С����%d\n", n-1, num[min]);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int statistic(int num[])
{
	int i;

	for (i=0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -888)
		{
			break;
		}
	}
	return i;
}

int search(int num[], int m, int n)
{
	int i, min;

	min = m;
	for (i=m+1; i < n; i++)
	{
		if (num[min] > num[i])
		{
			min = i;
		}
	}
	return min;
}