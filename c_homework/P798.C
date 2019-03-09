#include <stdio.h>
#include <stdlib.h>

typedef struct STUDENT
{
	int studentID;			//ѧ��
	char studentName[10];	//����
	int scoreComputer;		//������ɼ�
} STUD;

/* userCode(<80�ַ�): �Զ��庯��֮ԭ������ */
STUD *alloc_memery(int m);

int main(void)
{
	int m, i;
	STUD *pStu;

	printf("Input m: ");
	scanf("%d", &m);

	pStu = alloc_memery(m);
	if (pStu != NULL)
	{
		printf("\n����ɹ���ѧ�����α���ʼ��Ϊ��");
		for (i=0; i<m; i++)
		{
			printf("%3d", pStu[i].studentID);
		}
		free(pStu);
	}
	else
	{
		printf("\n����ʧ��!\n");
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
STUD *alloc_memery(int m)
{
	int i;
	STUD *head;

	head = (STUD *)calloc(m, sizeof(STUD));
	for (i=0; i < m; i++)
	{
		(head + i)->studentID = i + 1;
	}
	return head;
}