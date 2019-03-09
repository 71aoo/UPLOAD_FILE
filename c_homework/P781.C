#include <stdio.h>

void strcopy(char *str, char *str1);
int strcomp(char *str, char *str1);

int main(void)
{
	int i, j;
	char temp[81];
	char str[5][81];

	printf("Input 5 strings:\n");
	for (i=0; i < 5; i++)
	{
		gets(str[i]);
	}
	printf("---------------------------\n");
	for (i=0; i < 5; i++)
	{
		for (j=i+1; j < 5; j++)
		{
			if (strcomp(str[i], str[j]) > 0)
			{
				strcopy(temp, str[i]);
				strcopy(str[i], str[j]);
				strcopy(str[j], temp);
			}
		}
		printf("%s\n", str[i]);
	}
	return 0;
}

void strcopy(char *str, char *str1)
{
	int i;

	for (i=0; str1[i]; i++)
	{
		str[i] = str1[i];
	}
	str[i] = '\0';
}

int strcomp(char *str, char *str1)
{
	int i;

	for (i=0; str[i] && str1[i]; i++)
	{
		if (str[i] > str1[i])
		{
			return 1;
		}
		else if (str[i] < str1[i])
		{
			return (-1);
		}
	}
	if (str1[i] == '\0' && str[i] != '\0')
	{
		return 1;
	}
	return 0;
}