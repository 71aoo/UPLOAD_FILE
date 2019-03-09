#include <stdio.h>

int input(int *num);  /* userCode(<50字符): 自定义函数1之原型声明 */
int prog2(int *num, int num3, int num1);  /* userCode(<50字符): 自定义函数2之原型声明 */
void swap(int *num1, int *num2);  /* userCode(<50字符): 自定义函数3之原型声明 */

int main(void)
{
	int num[100], i, n, min;
	
	printf("Input: ");
	n = input(num);  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	for (i=0; i<n-1; i++)
	{
		min = prog2(num, i, n);  /* userCode(<40字符): 调用函数查找num中第i～n-1个数之最小数的下标 */
		if (min != i)
		{
			swap(&num[i], &num[min]);  /* userCode(<40字符): 调用函数以交换num[i]和num[min] */
		}
	}

	printf("\nResult: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", num[i]);
	}
	putchar('\n');

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int input(int *num)
{	
	int i, n=0;

	for (i = 0; ; i++)
	{	
		scanf("%d", &num[i]);
		if (num[i] == -888) 
		{
			break;
		}
		n++ ;
	}
	return n;
}

int prog2(int *num, int num3, int num1)
{
	int i=0, min;
	
	min = num3;
	for (i=num3+1; i < num1; i++)
	{
		if (num[i] < num[min])
		{
			min = i;
		}
	}
	return min;
}

void swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
