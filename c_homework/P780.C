#include<stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int hanshu(char str[]);

int main(void)
{
	int Len;
	char String[101] = "?????????????????????????????????????????????????????????????";

	printf("input a string: ");
	Len = hanshu(String);  /* userCode(<50�ַ�): ���ú���ʵ�����벢ͳ�������ַ����� */

	printf("\nThe string lenth is: %d\n", Len);
	printf("The string is: %s\n", String);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int hanshu(char str[])
{
	int ch, i = 0;	

	ch = getchar(); //�Ӽ�������һ���ַ���������ch
	while ((char)ch != '\n' && ch != EOF) //����ch�е��ַ��Ȳ��ǻ��з�'\n'��Ҳ�����ļ�������EOF
	{
		if (i<100) //������ַ���δ��100���ַ�
		{
			str[i] = (char)ch;
			i++;
		}
		else
		{
			break;
		}
		ch = getchar();
	}
	str[i] = '\0'; //�����ַ���������־'\0'

	return i;
}