#include<stdio.h>

int main(void)
{
	int i, array[5];

	printf("������5����: ");
	for (i=0; i < 5; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("\n��5��������Ϊ: ");
	for (i=i-1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
	return 0;
}