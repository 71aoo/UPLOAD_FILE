#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int No;
	int no;
	struct student *next;
} STU;
 
int main(void)
{
	int i, n, flag = 0;
	STU *head = NULL, *p1, *p2;

	printf("Please input n: ");
	scanf("%d", &n);
	for (i=1; i <= n; i++)
	{
		p1 = (STU *)malloc(sizeof(STU));
		if (head == NULL)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p2->No = i;
	}
	p2->next = head;
	printf("\nResult is:\n");
	p1 = head;
	for (i=1; ; i++)
	{
		p1->no = i;
		if (p1->no % 3 == 0)
		{
			flag++;
			if (flag != n-1)
			{
				printf("delete %d student: %d.\n", flag, p1->No);
				p2->next = p1->next;
				free(p1);
				i = 1;
			}
			else
			{
				printf("delete %d student: %d.\n", flag, p1->No);
				p2->next = NULL;
				free(p1);
			}
		}
		if (flag == n-1)
		{
			break;
		}
		p2 = p2->next;
		p1 = p2->next;
	}
	printf("The remained student is %d.\n", p2->No);
	free(p2);
	return 0;
}