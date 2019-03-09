#include <stdio.h>

int put(int num[]);  /* userCode(<50字符): 自定义函数之原型声明 */

int main(void)
{
	int num[16], n, i;
	
	printf("请输入若干个数: ");
	n = put(num);  /* userCode(<30字符): 调用函数读入数据到num中并统计个数 */

	printf("\n共%d个数，倒序为: ", n);
	for (i=n-1; i>=0; i--)
	{
		printf("%d ", num[i]);
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int put(int num[])
{
	int i;

	for (i=0; i < 16; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -1)
		{
			break;
		}
	}
	return i;
}