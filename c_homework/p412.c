#include<stdio.h>

void main()
{
	int i, j, num = 0, tmp, count, data[10000];


	printf("Please input numbers:");
	for (i = 0; i < 10000; i++)
	{
		scanf("%d", &tmp);
		if (tmp != -222)   
		{
			data[i] = tmp; 
			num++;
		}
		else   
		{
			break;
		}
	}
	
	
	for (j = 1; j <= num - 1; j++)
	{
		for (i = 1; i <= num - j; i++)
		{
			if (data[i-1] > data[i])
			{
				tmp = data[i-1];
				data[i-1] = data[i];
				data[i] = tmp;
			}

		}
	}

	printf("Output:\n");
	for (i = 0, count = 0; i < num; i++)
	{
		printf("%-6d", data[i]);
		count++;
		if ((count % 6 == 0) || (count == num)) 
		{
			printf("\n");
		}
		else 
		{
			printf(",");
		}
	}
}