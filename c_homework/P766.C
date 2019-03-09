#include <stdio.h>

int main(void)
{
	char str[128], flag1 = 0, flag2 = 0, m = 0, k = 0;
	int i;

	printf("input a string:");
	gets(str); /* 输入一个字符串存放到数组str中 */
	
	/* 在字符串中查找注释开始标记'/*' */
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == '/') && (str[i + 1] == '*'))
		{
			
			m = i; /* 将注释开始标记'/*'中的字符'/'出现的位置记录下来，并存放到变量m中 */
			flag1 = 1; /* 将变量flag1的值置为1，表示已经找到注释开始标记'/*' */
			break; /* 结束循环，停止查找 */
		}
	}
	
	/* 在字符串中查找注释结束标记 */
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == '*') && (str[i + 1] == '/'))
		{
			k = i; // 将注释结束标记'*/'中的字符'*'出现的位置记录下来，并存放到变量k中
			flag2 = 1; // 将变量flag2的值置为1，表示已经找到注释结束标记'*/' 
			break; // 结束循环，停止查找 
		}
	}
    
	/* 如果flag1和flag2的值同时为0，则表示字符串中没有注释标记，直接输出该字符串 */
	if ((0 == flag1) && (0 == flag2))
	{
		printf("\nThe result is :");
		puts(str);
	}
	/* 字符串中出现的注释合法 */
	else if (1 == flag1 && 1 == flag2 && m < k && m != k - 1) // flag1和flag2的值同时为1，说明字符串中有'/*'和'*/'，m小于k说明'/*'出现在'*/'之前，因此注释合法
	{
		printf("\nThe result is :");
		// 以下for循环的功能：输出'/*'之前的字符
		for (i = 0; i < m; i++)
		{
			putchar(str[i]);
		}
		
		// 以下for循环的功能：输出'*/'之后的字符
		for (i = k + 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}		
	}
	/* 注释不合法的情况 */
	else 
	{
		printf("\ncomment is error\n");
	}
	

	return 0;
}

