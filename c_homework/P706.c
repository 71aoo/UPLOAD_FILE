#include<stdio.h>

int main(void)
{
	int i, j, temp, Data[10];

	printf("Please input 10 number:\n");
	for (i=0; i < 10; i++)
	{
		scanf("%d", &Data[i]);
	}
	for (i=0; i < 9; i++)
	{
		for (j=i+1; j < 10; j++)
		{
			if (Data[i] > Data[j])
			{
				temp = Data[i];
				Data[i] = Data[j];
				Data[j] = temp;
			}
		}
	}
	for (i=0; i < 10; i++)
	{
		printf("%5d", Data[i]);
	}
	return 0;
}