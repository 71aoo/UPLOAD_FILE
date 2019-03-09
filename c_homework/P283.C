#include <stdio.h>

int statistic(int num[]);  /* userCode(<50字符): 自定义函数1之原型声明 */
int search(int num[], int m, int n);  /* userCode(<50字符): 自定义函数2之原型声明 */

int main(void)
{
	int num[100], n, min;
	
	printf("请输入若干个数: ");
	n = statistic(num);   /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	min = search(num, 0, n);   /* userCode(<40字符): 调用函数查找第0～n-1个数中最小数的下标 */
	printf("\n第0～%d个数中最小的是%d", n-1, num[min]);
	min = search(num, 3, n);   /* userCode(<40字符): 调用函数查找第3～n-1个数中最小数的下标 */
	printf("\n第3～%d个数中最小的是%d\n", n-1, num[min]);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int statistic(int num[])
{
	int i;

	for (i=0; i < 100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -888)
		{
			break;
		}
	}
	return i;
}

int search(int num[], int m, int n)
{
	int i, min;

	min = m;
	for (i=m+1; i < n; i++)
	{
		if (num[min] > num[i])
		{
			min = i;
		}
	}
	return min;
}