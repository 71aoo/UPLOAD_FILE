/* 
����Ĺ��ܣ�
	����ÿֻ5Ԫ��ĸ��ÿֻ3Ԫ��С��ÿ3ֻ1Ԫ����MԪǮ��Nֻ�����ʹ�����ĸ����С������ֻ��
*/
#include <stdio.h>

int main(void)
{
	int cock, hen, chick; //����cock�д�Ź���������������hen�д��ĸ��������������chick�д��С��������
	int m, n;

	printf("Input the money: ");
	scanf("%d", &m);  //����mԪǮ
	printf("Input the number: ");
	scanf("%d", &n);  //����nֻ��
	
	printf("  cock   hen chick\n");
	/* ʹ����ٷ��ҳ�����Ҫ��Ĺ�����ĸ����С�������� */
	for (cock = 0; cock <= n; cock++)
	{
		for (hen = 0; hen <= n; hen++)
		{
			chick = n - cock - hen; //С�����������ڼ�������n��ȥ������ĸ��������
			
			/* �������⣬���򼦵�Ǯ��mԪ������С���������϶���3�ı�����
				���cock��hen��chick����ͬʱ�������ʽ(5 * cock + 3 * hen + chick/3 == m)��
				(chick % 3 == 0)
			*/
			if ((5 * cock + 3 * hen + chick/3 == m) && (chick % 3 == 0) && (chick >= 0))
			{
				printf("%6d%6d%6d\n", cock, hen, chick); //���������ĸ����С��������
			}
		}
	}

	return 0;
}