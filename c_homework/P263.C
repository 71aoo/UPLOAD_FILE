#include <stdio.h>

/* userCode(<60�ַ�): �Զ��庯��֮ԭ������ */
int sum1(int *in, int *in1, int in2);

int main(void)
{
	int arr1[6], arr2[10], arr3[15], gt60A, gt60B, gt60C, sumA, sumB, sumC;
	
	sumA = sum1(arr1, &gt60A, 6);  /* userCode(<60�ַ�): ���ú����� 6������arr1�У�������ͼ�>60�ĸ��� */
	sumB = sum1(arr2, &gt60B, 10);  /* userCode(<60�ַ�): ���ú�����10������arr2�У�������ͼ�>60�ĸ��� */
	sumC = sum1(arr3, &gt60C, 15);  /* userCode(<60�ַ�): ���ú�����15������arr3�У�������ͼ�>60�ĸ��� */

	printf("\narr1[0]=%3d, arr1[ 5]=%3d, sum(arr1)=%d, cnt(arr1)=%d", arr1[0], arr1[5], sumA, gt60A);
	printf("\narr2[0]=%3d, arr2[ 9]=%3d, sum(arr2)=%d, cnt(arr2)=%d", arr2[0], arr2[9], sumB, gt60B);
	printf("\narr3[0]=%3d, arr3[14]=%3d, sum(arr3)=%d, cnt(arr3)=%d\n", arr3[0], arr3[14], sumC, gt60C);
	
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int sum1(int *in, int *in1, int in2)
{
	int in3, su = 0;

	*in1 = 0;
	printf("������%d����: ", in2);
	for (in3 = 0; in3 < in2; in3++)
	{
		scanf("%d", &(in[in3]));
		su += in[in3];
		if (in[in3] > 60)
		{
			(*in1)++;
		}
	}
	return su;
}