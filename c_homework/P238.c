#include<stdio.h>

int main(void)
{
	int i, array[5];

	printf("请输入5个数: ");
	for (i=0; i < 5; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("\n这5个数倒序为: ");
	for (i=i-1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
	return 0;
}