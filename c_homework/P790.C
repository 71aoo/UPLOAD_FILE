#include <stdio.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬����ṹ��Ķ��塢����ԭ�������ȣ���������) */

/* ����ṹ������struct stu */
struct stu
{
	char name[11];
	char num[11];
	int score;
};

void input(struct stu *pstu, int n); //����ԭ������
void output(struct stu *pstu, int n); //����ԭ������
/* User Code End(�������Ӵ������) */

int main(void)
{  
	struct stu stud[5];	 
	
	input(stud, 5);   
	printf("\nfailed the exam: ");  
	output(stud, 5);
	
	return 0; 
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */

/*���º����Ĺ��ܣ��Ӽ��������ѧ�������� */
void input(struct stu *pstu, int n)
{
	int i;

	printf("input name number score:\n");
	for (i=0; i<n; i++)
	{
		printf("student %d: ", i + 1); //��ʾ���
		scanf("%s %s %d", (pstu + i)->name, (pstu + i)->num, &((pstu + i)->score)); //����ѧ������
		/* ����whileѭ�������ã�����ĳɼ�����0 ~ 100֮�䣬�������� */
		while ((pstu + i)->score > 100 || (pstu + i)->score <0) 
		{
			printf("           error score! input again!\n");
			printf("student %d: ", i + 1);
			scanf("%s %s %d", (pstu + i)->name, (pstu + i)->num, &((pstu + i)->score));
		}
	}
}

/*���º����Ĺ��ܣ�����Ļ�����������ѧ�������� */
void output(struct stu *pstu, int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		if ((pstu + i)->score < 60) //�в�����Ŀγ�
		{
			printf("%s/%s,%d   ", (pstu + i)->num, (pstu + i)->name, (pstu + i)->score);
		}		
	}
}