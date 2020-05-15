#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
int a = 2018;//全局变量
void test1()
{
	printf("test1::%d\n", a);
	printf("test1::%d\n", b);
}

int b = 2020;//全局变量
void test2()
{
	printf("test2::%d\n", a);
	printf("test2::%d\n", b);
}

int main()
{
	test1();
	test2();

	return 0;
}

//
//int Add(int x, int y)
//{
//	int z = 0;//
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//
//	{
//		int c = 0;
//		printf("%d\n", c);
//	}
//	printf("%d\n", c);
//
//	return 0;
//}
//void test()
//{
//	int b = 20;
//	printf("b = %d\n", b);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 0;
//	return 0;
//}





//{}-代码块
//在代码块内部定义的变量就是局部变量
//在代码块外部定义的变量就是全局变量
//
//int val = 100;//全局变量
//
//void test()
//{
//	int b = 20;
//	printf("b = %d\n", b);
//}
//
//int main()
//{
//	int a = 10;
//	{
//		int c = 0;//局部变量
//
//	}
//	return 0;
//}

//void print(int arr[][5])
//{
//
//}

//void print(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//}
//
//int Max(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int max = arr[0][0];
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
//	//print(arr, 3, 5);
//	int max = Max(arr, 3, 5);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//写一个选择排序-从小到大
//
//void Sort(int arr[], int n)
//{
//	int i = 0;
//	//选择排序的次数
//	for (i = 0; i < n - 1; i++)
//	{
//		//在所有的待排序元素中找一个最小的和下标为i的元素进行交换
//		//找
//		int min = i;
//		int j = 0;
//		for (j = i; j < n; j++)
//		{
//			if (arr[j] < arr[min])
//				min = j;
//		}
//		//换
//		int tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2, 1, 4, 7, 5, 3, 6, 9, 0, 8 };
//	int arr2[5] = { 2, 1, 4, 7, 5 };
//	Sort(arr, 10);//排序数组，10个元素
//	Sort(arr2, 5);//排序数组，5个元素
//
//	return 0;
//}

//
//void test(int arr[], int n)
//{
//	printf("%p\n", arr);
//	arr[0] = 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);
//	test(arr, 10);
//	return 0;
//}

//数组名作为函数参数
//void print(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int average(int arr[])
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / 10;
//}

//n是数组的元素个数
//int average(int arr[], int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum / n;
//}
//
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[5] = { 1, 2, 3, 4, 5};
//
//	int avg = average(arr, 10);
//	printf("%d\n", avg);
//
//	avg = average(arr2, 5);
//	printf("%d\n", avg);
//
//	//把数组名作为函数参数了
//	//print(arr);//理解为把数组arr进行了传参
//	//本质上数组名是数组首元素的地址
//	return 0;
//}


//void print(int n)
//{
//	printf("%d ", n);
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);//把数组元素作为参数传递
//		print(arr[i]);
//	}
//	return 0;
//}
//
//void Move(char one, char three)
//{
//	printf("%c -->  %c\n", one, three);
//}
//
//void Hanoi(int n, char one, char two, char three)
//{
//	if (n == 1)
//	{
//		//直接移动这个盘子
//		Move(one, three);
//	}
//	else
//	{
//		//1. 将one 上的 n-1盘子借助于three，移动到two
//		Hanoi(n-1, one, three, two);
//		//2. 将one上的1盘子挪到three上
//		Move(one, three);
//		//3. 把two 上的n-1盘子 借助one,移动到three
//		Hanoi(n-1, two, one, three);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入盘子的总数:>");
//	scanf("%d", &n);//3
//	printf("对%d个盘子的移动过程如下:>\n", n);
//	Hanoi(n, 'A', 'B', 'C');//把n的盘子从A座挪到C座上，借助于B座
//	return 0;
//}