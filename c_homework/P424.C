#include <stdio.h>

int input(int *num);  /* userCode(<50�ַ�): �Զ��庯��1֮ԭ������ */
int prog2(int *num, int num3, int num1);  /* userCode(<50�ַ�): �Զ��庯��2֮ԭ������ */
void swap(int *num1, int *num2);  /* userCode(<50�ַ�): �Զ��庯��3֮ԭ������ */

int main(void)
{
	int num[100], i, n, min;
	
	printf("Input: ");
	n = input(num);  /* userCode(<30�ַ�): ���ú����������ݵ�num�в�ͳ�Ƹ��� */

	for (i=0; i<n-1; i++)
	{
		min = prog2(num, i, n);  /* userCode(<40�ַ�): ���ú�������num�е�i��n-1����֮��С�����±� */
		if (min != i)
		{
			swap(&num[i], &num[min]);  /* userCode(<40�ַ�): ���ú����Խ���num[i]��num[min] */
		}
	}

	printf("\nResult: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", num[i]);
	}
	putchar('\n');

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int input(int *num)
{	
	int i, n=0;

	for (i = 0; ; i++)
	{	
		scanf("%d", &num[i]);
		if (num[i] == -888) 
		{
			break;
		}
		n++ ;
	}
	return n;
}

int prog2(int *num, int num3, int num1)
{
	int i=0, min;
	
	min = num3;
	for (i=num3+1; i < num1; i++)
	{
		if (num[i] < num[min])
		{
			min = i;
		}
	}
	return min;
}

void swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}