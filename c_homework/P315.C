#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	char fi[128], aa[21], ha[201], ys;
	int i = 0, fl = -1, ll = -1, line = 0, flag = 0;

	printf("input the file's name and the string: ");
	scanf("%s%s", fi, aa); //�����ļ����ʹ����ҵ��ַ���
	fp = fopen(fi, "r"); //���ļ�
	/* ����򲻿��ļ������������Ϣ */
	if (fp == NULL)
	{
		printf("\nfile open error!");
		exit(0);
	}
	printf("------------------------File content:----------------------\n");
	/*���ļ��ж����ַ�������ÿһ�н��в���*/
	do
	{
		ys = fgetc(fp); //���ļ��ж���һ���ַ���ŵ�����ys��
		ha[i] = ys; //��ys�е��ַ���������ha��һ��Ԫ��
		/* ������������ļ���������˵���Ѿ����������һ���ַ� */
		if (ys == EOF)
		{
			ha[i] = '\0'; //�����ַ���������־
			line++; //��������1
			strlwr(ha); //������ha�е��ַ���ȫ��ת����Сд��ĸ
			strlwr(aa); //������aa�е��ַ���ȫ��ת����Сд��ĸ
			/* ���ַ���ha�л�δ�ҵ��ַ���aa */
			if (flag != 1)
			{
				if (strstr(ha, aa) != NULL) //���ַ���ha���ҵ��ַ���aa
				{
					fl = line; //���ַ���aa��һ�γ��ֵ���������f1
					flag = 1; //��flag��ֵ��Ϊ1��˵���Ѿ��ҵ����ַ���aa
				}
			}
			
			if (strstr(ha, aa) != NULL) //���ַ���ha���ҵ��ַ���aa
			{
				ll = line; //����������ll
			}
			break; //�����ļ��Ķ�ȡ����
		}
		
		/* ����������ǻ��з���˵���Ѿ�������һ���ַ� */
		else if (ys == '\n')
		{
			putchar(ys); 
			ha[i] = '\0';
			i = 0; //Ϊ����һ���ַ���׼��
			line++;
			strlwr(ha);
			strlwr(aa);
			if (flag != 1)
			{
				if (strstr(ha, aa) != NULL)
				{
					fl = line;
					flag = 1;
				}
			}
			if (strstr(ha, aa) != NULL)
			{
				ll = line;
			}
		}
		/* �����Ĳ��ǻ��з�Ҳ�����ļ������� */
		else 
		{
			putchar(ys); //������ַ�
			i++; //Ϊ����һ���ַ���׼��
		}
		
	} while (1);
	printf("\n------------------------File summary:----------------------\n");
	printf("%d lines, first line: %d, last line: %d\n", line, fl, ll);
	fclose(fp);

	return 0;
}



		