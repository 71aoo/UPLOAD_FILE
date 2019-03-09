#include<stdio.h>
#include<malloc.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬���������ʹ�õĽṹ�����͡������Զ��庯����ԭ�ͣ���������) */
#define LEN sizeof(struct student)

int sum = 0;
struct student{
	
	int num;
	int score;
	struct student *next;
};

struct student *creat();
struct student *merge(struct student *p1,struct student *p2);

/* User Code End(�������Ӵ������) */

/* print�Թ涨�ĸ�ʽ��ɱ�����ʾָ�������� */
void print(char *Info, struct student *Head);

int main(void)
{	
	struct student *ah, *bh;
	
	printf("��������A��������ѧ�ż��ɼ�(������Ϊ0ʱ��ʾֹͣ)��\n");
	ah = creat();
	printf("\n��������B��������ѧ�ż��ɼ�(������Ϊ0ʱ��ʾֹͣ)��\n");
	bh = creat();

	print("\n����A��", ah);
	print("\n����B��", bh);
	
	ah = merge(ah, bh);
	print("\n����A��B�ϲ���", ah);
	
	return 0;
}

void print(char *Info, struct student *Head)
{
	printf("%s", Info);
	while (Head != NULL)
	{
		printf("%d,%d  ", Head->num, Head->score);
		Head = Head->next;
	}
}

/* User Code Begin(�����ڴ˺�����Զ��庯������ƣ���������) */
struct student *creat()
{
	//int n=0;
	struct student *head;
	struct student *p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	printf("ѧ��%d:",sum+1);
	scanf("%d %d",&p1->num,&p1->score);
	head=NULL;
	while(p1->num!=0)
	{
		sum=sum+1;
		//n++;
		if(head==NULL)
		{
			head=p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;
		p1=(struct student*)malloc(LEN);
		printf("ѧ��%d:",sum+1);
		scanf("%d %d",&p1->num,&p1->score);

	}

	p2->next=NULL;
	return head;
	
}
struct student *merge(struct student *p1,struct student *p2)
{
	struct student *p,*head;
	p=(struct student *)malloc(LEN);
	if(p1 != NULL)
	{
		head=p=p1;
		p1=p1->next;
	}
	else
	{
		head=p=p2;
		p2=p2->next;
		
	}

	while(p1 !=NULL)
	{
		p->next=p1;
		p=p1;
		p1=p1->next;
	}
	while(p2 !=NULL)		
	{
		p->next=p2;
		p=p2;
		p2=p2->next;
	}
	return head;
}