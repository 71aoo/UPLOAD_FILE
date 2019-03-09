#include<stdio.h>

int main(void)
{
	int i, j;

	printf("«Î ‰»Îi: ");
	scanf("%d", &i);
	printf("\nResult: ");
	for (j=1; j <= i; j++)
	{
		printf("%d*%d=%-3d", i, j, i*j);
	}
	return 0;
}