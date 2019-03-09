#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	char fi[128], aa[21], ha[201], ys;
	int i = 0, fl = -1, ll = -1, line = 0, flag = 0;

	printf("input the file's name and the string: ");
	scanf("%s%s", fi, aa); //输入文件名和待查找的字符串
	fp = fopen(fi, "r"); //打开文件
	/* 如果打不开文件，输出错误信息 */
	if (fp == NULL)
	{
		printf("\nfile open error!");
		exit(0);
	}
	printf("------------------------File content:----------------------\n");
	/*从文件中读出字符，并对每一行进行查找*/
	do
	{
		ys = fgetc(fp); //从文件中读出一个字符存放到变量ys中
		ha[i] = ys; //将ys中的字符赋给数组ha的一个元素
		/* 如果读出的是文件结束符，说明已经读出了最后一行字符 */
		if (ys == EOF)
		{
			ha[i] = '\0'; //添加字符串结束标志
			line++; //行数增加1
			strlwr(ha); //将数组ha中的字符串全部转换成小写字母
			strlwr(aa); //将数组aa中的字符串全部转换成小写字母
			/* 在字符串ha中还未找到字符串aa */
			if (flag != 1)
			{
				if (strstr(ha, aa) != NULL) //在字符串ha中找到字符串aa
				{
					fl = line; //将字符串aa第一次出现的行数赋给f1
					flag = 1; //将flag的值置为1，说明已经找到过字符串aa
				}
			}
			
			if (strstr(ha, aa) != NULL) //在字符串ha中找到字符串aa
			{
				ll = line; //将行数赋给ll
			}
			break; //结束文件的读取操作
		}
		
		/* 如果读出的是换行符，说明已经读出了一行字符 */
		else if (ys == '\n')
		{
			putchar(ys); 
			ha[i] = '\0';
			i = 0; //为读下一行字符做准备
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
		/* 读出的不是换行符也不是文件结束符 */
		else 
		{
			putchar(ys); //输出该字符
			i++; //为读下一个字符做准备
		}
		
	} while (1);
	printf("\n------------------------File summary:----------------------\n");
	printf("%d lines, first line: %d, last line: %d\n", line, fl, ll);
	fclose(fp);

	return 0;
}



		