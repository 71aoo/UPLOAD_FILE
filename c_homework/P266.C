#include <stdio.h>

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
float fun(float arr[], int m, int *n);

int main(void)
{
	float arr1[6], arr2[8], arr3[12], sumA, sumB, sumC;
	int gt70A, gt70B, gt70C;
	
	sumA = fun(arr1, 6, &gt70A);  /* userCode(<80�ַ�): ���ú����� 6������arr1�У�������ͼ�>70�ĸ��� */
	sumB = fun(arr2, 8, &gt70B);  /* userCode(<80�ַ�): ���ú����� 8������arr2�У�������ͼ�>70�ĸ��� */
	sumC = fun(arr3, 12, &gt70C);  /* userCode(<80�ַ�): ���ú�����12������arr3�У�������ͼ�>70�ĸ��� */

	printf("\narr1[ 5]=%4.1f, sum(arr1)=%5.1f, cnt(arr1)=%d",   arr1[5],  sumA, gt70A);
	printf("\narr2[ 7]=%4.1f, sum(arr2)=%5.1f, cnt(arr2)=%d",   arr2[7],  sumB, gt70B);
	printf("\narr3[11]=%4.1f, sum(arr3)=%5.1f, cnt(arr3)=%d\n", arr3[11], sumC, gt70C);
	
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
float fun(float arr[], int m, int *n)
{
	int i;
	float sum = 0;

	*n = 0;
	printf("������%2d����: ", m);
	for (i = 0; i < m; i++)
	{
		scanf("%f", &arr[i]);
	}
	for (i = 0; i < m; i++)
	{
		sum = sum + arr[i];
		if (arr[i] > 70)
		{
			(*n)++;
		}
	}
	return sum;
}