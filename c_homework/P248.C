#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int find(int in[], int in1);

int main(void)
{
	int arrA[5], arrB[8], minPosA, minPosB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);

	minPosA = find(arrA, 5);  /* userCode(<30�ַ�): ���ú�������arrA��Ԫ�ص���Сֵ���ڵ��±� */
	printf("\nminPos(arrA) = %d", minPosA);
	minPosB = find(arrB, 8);  /* userCode(<30�ַ�): ���ú�������arrB��Ԫ�ص���Сֵ���ڵ��±� */
	printf("\nminPos(arrB) = %d\n", minPosB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int find(int in[], int in1)
{
	int in2, temp = in[0], in3 = 0;
	
	for (in2 = 1; in2 < in1; in2++)
	{
		if (temp > in[in2])
		{
			temp = in[in2];
			in3 = in2;
		}
	}
	return in3;
}

