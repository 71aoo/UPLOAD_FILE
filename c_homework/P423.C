#include <stdio.h>

#define maxNums 10000
#define endFlag -222

/* 本部分代码功能建议：函数原型声明 */
/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、每行长<=50字符) */
int min(int data[], int n, int m);
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

int main(void)
{
	int i, mini, tmp;
	int inputData[maxNums] = {0}, dataCount=0;  /* inputData用于保存输入的数据，dataCount记录输入数据的个数 */
	
	printf("\nPlease input numbers:");
	for (i=0; i<maxNums; i++)
	{
		scanf("%d", &inputData[i]);
		if (endFlag == inputData[i])
		{
			break;
		}
		dataCount++;
	}

	for (i=0; i<dataCount-1; i++)
	{
		/* 本部分代码功能建议：调用相应的函数寻找第i个较小的数 */
		/* User Code Begin(Limit: lines<=1, lineLen<=50, 考生可在本行后添加代码、最多1行、行长<=50字符) */
		mini = min(inputData, dataCount, i+1);
		/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */

		tmp = inputData[mini];
		inputData[mini] = inputData[i];
		inputData[i] = tmp;
	}

	printf("\nOutput:\n");
	for (i=0; i<dataCount; i++)
	{
		printf("%-6d", inputData[i]);

		if (((i + 1) % 6) != 0 && i != dataCount - 1)
		{
			printf(",");
		}
		else
		{
			printf("\n");
		}
	}

	return 0;
}

/* 本部分代码功能建议：在数组中寻找第i个较小的数 */
/* User Code Begin(Limit: lines<=8, lineLen<=50, 考生可在本行后添加代码、最多8行、每行长<=50字符) */
int min(int data[], int n, int m)
{	
	int minj = m, minv = data[m], j;
	
	for (j = m; j < n; j++)
	{
		if (data[j] < minv)
		{
			minj = j;
			minv = data[j];
		}
	}
	
	return minj;
/* User Code End(考生添加代码结束。注意：空行和单独为一行的{与}均不计行数、行长不计行首tab缩进) */
}
/* Program End(程序到此结束，此后不能添加内容，否则0分) */
