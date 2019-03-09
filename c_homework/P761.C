#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* User Code Begin(�������ڱ��к����Ӵ��룬����ȫ�ֱ����Ķ��塢����ԭ�������ȣ���������) */

void move(int array[], int n, int m);

/* User Code End(�������Ӵ������) */

int main(void)
{
	int *number, n, m, i;

	printf("the total numbers is: ");
	scanf("%d", &n);
	printf("back m: ");
	scanf("%d", &m);

	number = (int *)malloc(n * sizeof(int));
	if (NULL == number)
	{
		puts("memory allocation failure!");
		exit(1);
	}

	printf("input %d integers: ", n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &number[i]);
	}
	
	move(number, n, m);

	printf("\n     after move %d: ", m);
	for (i=0; i<n; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n");

	free(number);
	return 0;
}

/* User Code Begin(�����ڴ˺���������Ҫ��ɳ�����������֣��纯��move����������) */
void move(int array[], int n, int m)
{
	int i, j, *pm;

	pm = (int *)malloc(m * sizeof(int)); //����malloc���������ڴ棬���Դ��m��int�͵�����

	/* ��ָ�����num��ָ���ڴ��е����m�����ƶ���ָ�����pm��ָ����ڴ��� */
	for (i=n-m, j=0; i<=n-1; i++, j++) 
	{
		pm[j] = array[i];
	}
	/* ��ָ�����num��ָ���ڴ��е�ǰn-m�����ƶ������ڴ��ĩβ���ճ���ǰ���m��λ��*/
	for (i=n-m-1, j=n-1; i>=0; i--, j--)
	{
		array[j] = array[i];
	}
	/* ��ָ�����pm��ָ���ڴ��е�m�����ƶ���ָ�����num��ָ���ڴ����ǰ��m��λ�� */
	for (i=0; i<m; i++)
	{
		array[i] = pm[i];
	}
	free(pm);
}

