#include <stdio.h>

/* NΪ�������ֵ����� */
#define N 10
/* ����ṹ������struct person��ʾÿλ���ֵ���Ϣ */
struct person  
{
	int number; //���ֵı��
	int score[6]; //��λ��ί�Ĵ��
	float finalScore; //���ֵ����ճɼ�
};

int main(void)
{
	int i, j, sum, max, min;
	struct person  tmp, singer[N];  //����singer[N]�������Nλ���ֵ�����
	
	printf("Please input:");
	/* ��������Nλ���ֵ����� */
	for (i = 0; i < N; i++)
	{
		singer[i].number = i + 1; //������
		/* ������λ��ί�Ĵ�� */
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &singer[i].score[j]);
		}
	}

	/* ���μ���Nλ���ֵ����յ÷� */
	for (i = 0; i < N; i++)
	{
		max = min = singer[i].score[0]; 
		sum = singer[i].score[0];
		for (j = 1; j < 6; j++)
		{
			/* ������߷� */
			if (singer[i].score[j] > max)
			{
				max = singer[i].score[j];
			}
			/* ������ͷ� */
			else if (singer[i].score[j] < min)
			{
				min = singer[i].score[j];
			}
			/* �����ܷ� */
			sum = sum + singer[i].score[j];
		}

		sum = sum - min - max; //�۳�һ����߷ֺ�һ����ͷֺ�ĵ÷�
		singer[i].finalScore = (float)sum / 4; //��������յ÷�
	}

	/* ʹ�����ݷ�����ÿλ���ֵ����յ÷ִӸߵ������� */
	for (j = 1; j <= N - 1; j++)
	{
		for (i = 1; i <= N - j; i++)
		{
			if (singer[i].finalScore  > singer[i-1].finalScore)
			{
				tmp = singer[i];
				singer[i] = singer[i-1];
				singer[i-1] = tmp;
			
			}
		}
	}

	printf("scores:\n");
	/* ���ÿλ���ֵı�ź����յ÷� */
	for (i = 0; i < N; i++)
	{
		printf("NO.%d:%.2f\n", singer[i].number, singer[i].finalScore);		
	}

	return 0;
}













