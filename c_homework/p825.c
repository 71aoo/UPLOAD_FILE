#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	long x;
	int k, i, m;
	char arr[10];
    
	printf("������һ��������");
	scanf("%ld", &x);
    
	/*�����������ݲ��Ϸ���Ҫ���������룬ֱ������Ϸ������ݣ�0��2147483647��*/
	while (x < 0 || x > 2147483647)
	{
		printf("\n���ݴ������������룺");
		scanf("%ld", &x);
	}
	printf("ת����Ľ���ǣ�");
	itoa(x, arr, 10); //������xת����ʮ�����ַ��������������arr��
	k = strlen(arr); //�����ַ����ĳ��ȣ������ó��ȸ�������k
	m = k; //����m��ֵ������ʾĳ�������ڸ������е�λ���ǵڼ�λ��m�ĳ�ֵ��kֵ��ͬ
    /* ������������ȡ���ַ������жϺ�ת�� */
	for (i=0; i<k; i++, m--)
	{
		switch (arr[i])
		{
			case '0':
				printf("��");
				break;
			case '1':
				printf("Ҽ");
				break;
			case '2':
				printf("��");
				break;
			case '3':
				printf("��");
				break;
			case '4':
				printf("��");
				break;
			case '5':
				printf("��");
				break;
			case '6':
				printf("½");
				break;
			case '7':
				printf("��");
				break;
			case '8':
				printf("��");
				break;
			case '9':
				printf("��");
				break;
			default:
				;
		}
        /* ����m��ֵȷ����ǰ����������Ǹ������ĵڼ�λ�����������Ӧ����Ϣ */
		if (m==10 || m==6 || m==2)
		{
			printf("ʰ");
		}
		if (m==3 || m==7)
		{
			printf("��");
		}
		if (m==4 || m==8)
		{
			printf("Ǫ");
		}
		if (m == 5)
		{
			printf("��");
		}
		if (m == 9)
		{
			printf("��");
		}
	}
	printf("Ԫ��\n");

	return 0;	
}
