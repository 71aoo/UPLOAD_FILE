#include<stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=1, lineLen<=50, �������ڱ��к����Ӵ��롢���1�С��г�<=50�ַ�) */
void swap(int *numa, int *numb);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int numA, numB;

	printf("please input a and b: ");
	scanf("%d,%d", &numA, &numB);

	swap(&numA, &numB);
	printf("\na=%d, b=%d\n", numA, numB);

	return 0;
}

/* �����ִ��빦�ܽ��飺ʵ���Ӻ���swap()�����a��b�Ľ��� */
/* User Code Begin(Limit: lines<=7, lineLen<=50, �������ڱ��к����Ӵ��롢���7�С��г�<=50�ַ�) */
void swap(int *numa, int *numb)
{
	int temp;

	temp = *numa;
	*numa = *numb;
	*numb = temp;
}
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */