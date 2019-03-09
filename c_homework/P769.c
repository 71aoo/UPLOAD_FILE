#include<stdio.h>

int main(void)
{
	int i, m, n, count;

	printf("please input m, n(5<=m<=n<=100000): ");
	scanf("%d,%d", &m, &n);
	printf("Result(%d-%d):\n", m, n);
	for (; m <= n; m++)
	{
		count = 0;
		for (i=2; i <= m; i++)
		{
			if (m%i == 0)
			{
				count++;
			}
		}
		if (count == 1)
		{
			if (m < 10)
			{
				printf("%d ", m);
			}
			if (m > 10 && m < 100)
			{
				if (m%10 == m/10)
				{
					printf("%d ", m);
				}
			}
			if (m > 100 && m < 1000)
			{
				if (m%10 == m/100)
				{
					printf("%d ", m);
				}
			}
			if (m > 1000 && m < 10000)
			{
				if (m%10 == m/1000 && m/10%10 == m/100%10)
				{
					printf("%d ", m);
				}
			}
			if (m > 10000 && m < 100000)
			{
				if (m%10 == m/10000 && m/10%10 == m/1000%10)
				{
					printf("%d ", m);
				}
			}
		}
	}
	return 0;
}