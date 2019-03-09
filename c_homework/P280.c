#include<stdio.h>

int main(void)
{
	int i, j;

	printf("«Î ‰»Îi: ");
	scanf("%d", &i);
	printf("\nResult: ");
	for (j=0; j < 2*i-1; j++)
	{
		printf("%c ", 'T');
	}
	return 0;
}