#include <stdio.h>

int put(int num[]);  /* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */

int main(void)
{
	int num[16], n, i;
	
	printf("���������ɸ���: ");
	n = put(num);  /* userCode(<30�ַ�): ���ú����������ݵ�num�в�ͳ�Ƹ��� */

	printf("\n��%d����������Ϊ: ", n);
	for (i=n-1; i>=0; i--)
	{
		printf("%d ", num[i]);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int put(int num[])
{
	int i;

	for (i=0; i < 16; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -1)
		{
			break;
		}
	}
	return i;
}