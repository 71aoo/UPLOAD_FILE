#include <stdio.h>

/* userCode(<60字符): 自定义函数之原型声明 */
void kong(int i, int n);

int main(void)
{
	int i, n;

	printf("Please input n: ");
	scanf("%d", &n);

	for (i=1; i <= n; i++)
	{
		kong(i, n);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
		putchar('a' + i - 1);

		if (i > 1)
		{
			kong(i, n);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
			putchar('a' + i - 1);
		}
		putchar('\n');
	}

	for (i=n-1; i>=1; i--)
	{
		kong(i, n);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
		putchar('a' + i - 1);

		if (i > 1)
		{
			kong(i, n);  /* userCode(<39字符): 调用自定义函数输出若干空格 */
			putchar('a' + i - 1);
		}
		putchar('\n');
	}

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void kong(int i, int n)
{
	int j;
	static int k = 0;

	if (k%2 == 1 || i < 2)
	{
		for (j=0; j < n-i; j++)
		{
			putchar(' ');
		}
	}
	if (k%2 == 0)
	{
		for (j=0; j < 2*i-3; j++)
		{
			putchar(' ');
		}
	}
	k++;
}