#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int find(int in[], int in1, int num);

int main(void)
{
	int arrA[5], arrB[8], num, minPosA, minPosB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	minPosA = find(arrA, 5, num);  /* userCode(<50�ַ�): ���ú���������arrA�д���num����С�����ڵ��±� */
	if (-1 == minPosA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nminPos(arrA) = %d", minPosA);
	}

	minPosB = find(arrB, 8, num);  /* userCode(<50�ַ�): ���ú���������arrB�д���num����С�����ڵ��±� */
	if (-1 == minPosB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nminPos(arrB) = %d\n", minPosB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int find(int in[], int in1, int num)
{
	int in2, in3, temp, in4[8];

	for (in2 = 0; in2 < in1; in2++)
	{
		in4[in2] = in[in2];
	}
	for (in2 = 0; in2 < in1 - 1; in2++)
	{
		for (in3 = 0; in3 < in1 - 1 - in2; in3++)
		{
			if (in[in3] > in[in3 + 1])
			{
				temp = in[in3];
				in[in3] = in[in3 + 1];
				in[in3 + 1] = temp;
			}
		}
	}
	for (in2 = 0; in2 < in1; in2++)
	{
		if (in[in2] > num)
		{
			for (in3 = 0; in3 < in1; in3++)
			{
				
				if (in[in2] == in4[in3])
				{
					return in3;
				}
			}
			
		}
	}
	return - 1;
}



