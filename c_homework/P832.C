#include <stdio.h>
#include <string.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬����ṹ�����͵Ķ��塢����ԭ�������ȣ���������) */
typedef struct student
{
	int iNum;
	char cName[16];
	float fCh, fMath, fEng;
} STUD;

STUD * FindByName(STUD sTranscript[], int m, char a1[16]);
/* User Code End(�������Ӵ������) */

int main(void)
{
	STUD sTranscript[] = { {1001, "������", 69.5, 61.5, 91.5},  {1002, "������", 92.5, 67.5, 81.5}, 
		{1003, "�� ��",  79.5, 67.5, 86.5 },  {1004, "��仨", 83.0, 75.5, 84.0}, 
		{1005, "���޼�", 65.5, 81.5, 71.0} };
	STUD *stu;
	char name[16];
	
	printf("��������Ҫ���ҵ�ѧ������: ");
	gets(name);

	stu = FindByName(sTranscript, 5, name);  //���ú���������Ϣ
	if (stu)
	{
		printf("\n���ҵ�ѧ����ϢΪ: ");
		printf("%d %s %.1f %.1f %.1f\n", stu->iNum, stu->cName, stu->fCh, stu->fMath, stu->fEng);
	}
	else
	{
		printf("\n��Ҫ���ҵ�ѧ�������ڣ�\n");
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
STUD * FindByName(STUD sTranscript[], int m, char a1[16])
{
	int i;

	STUD *p1 = NULL;

	for (i = 0; i < m; i++)
	{
		if (strcmp(a1, sTranscript[i].cName) == 0)
		{
			p1 = &sTranscript[i];
		}
	}

	return p1;
}