#include<stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void swap(float *numA, float *numB);

int main(void)
{
	float numA, numB;

	printf("please input numA, numB: ");
	scanf("%f,%f", &numA, &numB);

	swap(&numA, &numB);  /* userCode(<40�ַ�): ���ú���ʵ��numA��numBֵ�Ľ��� */
	printf("\nnumA=%.3f, numB=%.3f\n", numA, numB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void swap(float *numA, float *numB)
{
	float temp;

	temp = *numB;
	*numB = *numA;
	*numA = temp;
}