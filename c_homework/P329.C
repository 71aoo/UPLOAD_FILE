#include<stdio.h>
#include<stdlib.h>

struct
{
	long No;
	char name[7];
	char sex[3];
	int birthday;
	int Cl, En, Jf;
	float aver;
} stu[50], temp;

int main(void)
{
	FILE *fp;
	char title[200];
	int i, j;
	int flag = 0;

	fp = fopen("学生成绩.txt", "r");
	if (fp == NULL)
	{
		puts("学生成绩文件“学生成绩.txt”打开失败，请仔细检查文件名是否正确，对应文件是否存在！");
		exit(1);
	}
	puts("名次  平均成绩  学号        姓名      性别  出生年  C语言  英语  微积分");
	fgets(title, 200, fp);
	while (fscanf(fp, "%ld%s%s%d%d%d%d", &stu[flag].No, stu[flag].name, stu[flag].sex,
		&stu[flag].birthday, &stu[flag].Cl, &stu[flag].En, &stu[flag].Jf) != EOF)
	{
		stu[flag].aver = (stu[flag].Cl + stu[flag].En + stu[flag].Jf) / 3.0f;
		flag++;
	}
	for (i=0; i < flag; i++)
	{
		for (j=i; j < flag; j++)
		{
			if (stu[i].aver < stu[j].aver)
			{
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
		printf("%3d   %7.2f   %d  %-8s   %-2s    %d   %3d    %3d   %3d\n", i+1, stu[i].aver,
			stu[i].No, stu[i].name, stu[i].sex, stu[i].birthday, stu[i].Cl, stu[i].En, stu[i].Jf);
	}
	fclose(fp);

	return 0;
}