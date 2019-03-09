#include <stdio.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */

/* ����ṹ������struct student */
struct student
{
	int num;
	char name[20];	
	float score1, score2, score3, score4;
	float aver;
};

void average(struct student banji[], int n);
int maxaver(struct student banji[], int n);

/* User Code End(�������Ӵ������) */

int main(void)
{
	int high;  /* high��¼ƽ������ߵ�ѧ������ţ�����ʹ�òο�����Ĵ��� */

	/* User Code Begin(�������ڱ��к����Ӵ��룬��������) */
	struct student myClass[5];
	int i;
	
	printf("Please input students  info:Num Name score1 score2 score3 score4\n");
	/* ����forѭ�����ܣ��Ӽ��̸�5��Ԫ���������� */
	for (i=0; i<5; i++)
	{
		printf("%d:", i+1); //��ʾ���
		scanf("%d %s %f %f %f %f", &myClass[i].num, myClass[i].name,
			&myClass[i].score1, &myClass[i].score2, &myClass[i].score3, &myClass[i].score4);
	}

	average(myClass, 5); //���ú������ѧ����ƽ����
	high = maxaver(myClass, 5); //���ú�����ƽ������ߵ�ѧ����ţ�������Ÿ�������high


	/* User Code End(�������Ӵ������) */

	printf("\nThe Highest is %s(%d)\nscore1=%.2f  score2=%.2f  score3=%.2f  score4=%.2f  aver=%.2f\n",
		myClass[high].name, myClass[high].num,
		myClass[high].score1, myClass[high].score2, myClass[high].score3, myClass[high].score4, myClass[high].aver);

	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣���������) */

/* ���º����Ĺ��ܣ����ѧ����ƽ���� */
void average(struct student banji[], int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		banji[i].aver = (banji[i].score1 + banji[i].score2 + banji[i].score3 + banji[i].score4) / 4;
	}
}

/* ���º����Ĺ��ܣ���ƽ������ߵ�ѧ����� */
int maxaver(struct student banji[], int n)
{
	int i, maxi;
	float max;

	max = banji[0].aver; //����һ��Ԫ�ص�ƽ���ָ�������max
	maxi = 0; //����һ��Ԫ�ص���Ÿ�������maxi
	
	/* ����forѭ�������ã������ƽ��������Ԫ�ؼ�Ԫ����� */
	for (i=1; i<n; i++)
	{
		if (banji[i].aver > max)
		{
			max = banji[i].aver;
			maxi = i;
		}
	}

	return maxi; //��ƽ������ߵ�Ԫ�������Ϊ����ֵ����

}

