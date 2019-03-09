#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	long x;
	int k, i, m;
	char arr[10];
    
	printf("请输入一个整数：");
	scanf("%ld", &x);
    
	/*如果输入的数据不合法，要求重新输入，直至输入合法的数据（0～2147483647）*/
	while (x < 0 || x > 2147483647)
	{
		printf("\n数据错误，请重新输入：");
		scanf("%ld", &x);
	}
	printf("转换后的结果是：");
	itoa(x, arr, 10); //将整数x转换成十进制字符串并存放在数组arr中
	k = strlen(arr); //计算字符串的长度，并将该长度赋给变量k
	m = k; //变量m的值用来表示某个数字在该整数中的位置是第几位，m的初值和k值相同
    /* 从数组中依次取出字符进行判断和转换 */
	for (i=0; i<k; i++, m--)
	{
		switch (arr[i])
		{
			case '0':
				printf("零");
				break;
			case '1':
				printf("壹");
				break;
			case '2':
				printf("贰");
				break;
			case '3':
				printf("叁");
				break;
			case '4':
				printf("肆");
				break;
			case '5':
				printf("伍");
				break;
			case '6':
				printf("陆");
				break;
			case '7':
				printf("柒");
				break;
			case '8':
				printf("捌");
				break;
			case '9':
				printf("玖");
				break;
			default:
				;
		}
        /* 根据m的值确定当前输出的数字是该整数的第几位数，并输出对应的信息 */
		if (m==10 || m==6 || m==2)
		{
			printf("拾");
		}
		if (m==3 || m==7)
		{
			printf("佰");
		}
		if (m==4 || m==8)
		{
			printf("仟");
		}
		if (m == 5)
		{
			printf("万");
		}
		if (m == 9)
		{
			printf("亿");
		}
	}
	printf("元整\n");

	return 0;	
}
