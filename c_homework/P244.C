#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int search(int in[], int in2, int in3);

int main(void)
{
	int arrA[5], arrB[8], searchVal, positionA, positionB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("������һ�������ҵ�����");
	scanf("%d", &searchVal);

	positionA = search(arrA, searchVal, 5);  /* userCode(<50�ַ�): ���ú�������searchVal��arrA�е��±� */
	if (-1 == positionA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\narrA: position = %d", positionA);
	}

	positionB = search(arrB, searchVal, 8);  /* userCode(<50�ַ�): ���ú�������searchVal��arrB�е��±� */
	if (-1 == positionB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\narrB: position = %d\n", positionB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int search(int in[], int in2, int in3)
{
	int in1;
	
	for (in1 = 0; in1 < in3; in1++)
	{
		if (in[in1] == in2)
		{
			return in1;
		}
	}
	return -1;
}

