#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	
	char pinming[21]; //��Ŵ��ļ�������ĳ��ƷƷ��
	char guige[11]; //��Ŵ��ļ�������ĳ��Ʒ���
	int shuliang; //��Ŵ��ļ�������ĳ��Ʒ����
	float danjia; //��Ŵ��ļ�������ĳ��Ʒ����
	int flag = 0; // flagֵΪ0����ʾû���ҵ���Ʒ��Ϊ1����ʾ�ҵ���Ʒ
	char cxpm[21]; //������������ŴӼ��������Ҫ��ѯ����Ʒ��
	FILE *fp;

	printf("Please input shang pin pin ming:");
	scanf("%s", cxpm); //����Ҫ��ѯ����Ʒ��
	
	printf("\ncha zhao qing kuang:\n");
	fp = fopen("sp.txt", "r"); //���ı��ļ�sp.txt
	
	/* �ж��ļ�sp.dat�Ƿ񱻴򿪣�fp����NULL�����ļ��򲻿��������ļ����� */
	if (NULL == fp)
	{
		printf("can not open file!\n");
		exit(1);
	}
	
	while (fscanf(fp, "%s %s %f %d", pinming, guige, &danjia, &shuliang) == 4) //����fscanf�����ã����ļ�sp.txt�ж�����
	{
		/* �����ļ���������Ʒ������Ӽ�������Ĵ���ѯ����Ʒ���ƱȽϣ��������ͬ��˵���ҵ���Ʒ���������Ʒ���� */
		if (strcmp(pinming, cxpm) == 0) //�������strcmp�ĺ���ֵΪ0��˵�������ַ�����ͬ
		{
			printf("%s,%s,%d,%.2f\n", pinming, guige, shuliang, danjia);
			flag = 1; //����־������ֵ��Ϊ1��˵���Ѿ��ҵ�Ҫ��ѯ����Ʒ
		}
		
	}
	/* �ж��Ƿ��ҵ�����ѯ����Ʒ�����flag��ֵΪ0��˵��û���ҵ����������Ӧ��Ϣ */
	if (0 == flag)
	{
		printf("mei you shang pin :%s", cxpm);
	}
	fclose(fp); //�ر��ļ�

	return 0;
}