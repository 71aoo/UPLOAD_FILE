/*
程序的功能：
    下面是一个5*5阶的螺旋方阵。编程打印出此形式的n*n(n<=15)阶的方阵（顺时针方向旋进）,n由键盘输入。
        ┌ 1  2  3  4  5 ┐
        │ 16 17 18 19 6 │
        │ 15 24 25 20 7 │
        │ 14 23 22 21 8 │
        └ 13 12 11 10 9 ┘

*/
#include <stdio.h>

int main(void)
{
	int i, j, k, n, begin, end;
	int data[15*15], arr[15][15];
	
	printf("Enter n:(n<=15)\n");
	scanf("%d", &n); //输入n的值
	
	/* 将1~n*n的值依次赋给数组a的各元素 */
	for (k=0; k<n*n; k++)
	{
		data[k] = k + 1;
	}
	
	begin = 0;
	end = n - 1;
	i = 0;
	k = 0;
	/* 从第一行开始顺时针依次将螺旋矩阵存放到二维数组arr中 */
	while (begin < end)
	{	
		/* 给二维数组arr最上边一行的前n-1个元素赋值（从左到右逐个赋值） */
		for (j=begin; j<end; j++) 
		{
			arr[i][j] = data[k];
			k++;
		}
		/* 给二维数组arr最右边一列的前n-1个元素赋值（从上到下逐个赋值） */
		for (i=begin; i<end; i++)
		{
			arr[i][j] = data[k];
			k++;
		}
		/* 给二维数组arr最下边一行的右边n-1个元素赋值（从右到左逐个赋值） */
		for (j=end; j>begin; j--)
		{
			arr[i][j] = data[k];
			k++;
		}
		/* 给二维数组arr最左边一列的n-1个元素赋值（从下到上逐个赋值） */
		for (i=end; i>begin; i--)
		{
			arr[i][j] = data[k];
			k++;
		}
		begin++; 
		end--;
		i++;
	}
	
	/* 如果矩阵的行、列数是奇数，则给最中间的元素赋值 */
	if (begin == end)
	{
		arr[begin][end] = data[k];
	}
	
	/* 输出矩阵 */
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}