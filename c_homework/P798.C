#include <stdio.h>
#include <stdlib.h>

typedef struct STUDENT
{
	int studentID;			//学号
	char studentName[10];	//姓名
	int scoreComputer;		//计算机成绩
} STUD;

/* userCode(<80字符): 自定义函数之原型声明 */
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
		printf("\n分配成功，学号依次被初始化为：");
		for (i=0; i<m; i++)
		{
			printf("%3d", pStu[i].studentID);
		}
		free(pStu);
	}
	else
	{
		printf("\n分配失败!\n");
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
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