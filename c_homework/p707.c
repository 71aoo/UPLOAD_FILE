/*
����Ĺ��ܣ�
    ������һ��5*5�׵��������󡣱�̴�ӡ������ʽ��n*n(n<=15)�׵ķ���˳ʱ�뷽��������,n�ɼ������롣
        �� 1  2  3  4  5 ��
        �� 16 17 18 19 6 ��
        �� 15 24 25 20 7 ��
        �� 14 23 22 21 8 ��
        �� 13 12 11 10 9 ��

*/
#include <stdio.h>

int main(void)
{
	int i, j, k, n, begin, end;
	int data[15*15], arr[15][15];
	
	printf("Enter n:(n<=15)\n");
	scanf("%d", &n); //����n��ֵ
	
	/* ��1~n*n��ֵ���θ�������a�ĸ�Ԫ�� */
	for (k=0; k<n*n; k++)
	{
		data[k] = k + 1;
	}
	
	begin = 0;
	end = n - 1;
	i = 0;
	k = 0;
	/* �ӵ�һ�п�ʼ˳ʱ�����ν����������ŵ���ά����arr�� */
	while (begin < end)
	{	
		/* ����ά����arr���ϱ�һ�е�ǰn-1��Ԫ�ظ�ֵ�������������ֵ�� */
		for (j=begin; j<end; j++) 
		{
			arr[i][j] = data[k];
			k++;
		}
		/* ����ά����arr���ұ�һ�е�ǰn-1��Ԫ�ظ�ֵ�����ϵ��������ֵ�� */
		for (i=begin; i<end; i++)
		{
			arr[i][j] = data[k];
			k++;
		}
		/* ����ά����arr���±�һ�е��ұ�n-1��Ԫ�ظ�ֵ�����ҵ��������ֵ�� */
		for (j=end; j>begin; j--)
		{
			arr[i][j] = data[k];
			k++;
		}
		/* ����ά����arr�����һ�е�n-1��Ԫ�ظ�ֵ�����µ��������ֵ�� */
		for (i=end; i>begin; i--)
		{
			arr[i][j] = data[k];
			k++;
		}
		begin++; 
		end--;
		i++;
	}
	
	/* ���������С�������������������м��Ԫ�ظ�ֵ */
	if (begin == end)
	{
		arr[begin][end] = data[k];
	}
	
	/* ������� */
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}