#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	//int arr[4+6];
//	//int arr[10];
//	int n = 0;
//	scanf("%d", &n);//10
//	int arr[n];//C99
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//Linux - Centos 7.0
//gcc 编译器
//C99
//

//
//int main()
//{
//	int arr[10];
//	arr[5] = 6;
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int arr[10];
//	//0-9
//	int i = 0;
//	//越界访问
//	for (i = 0; i <10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;//初始化
//	//int arr2[10];
//	//arr2[0] = 0;
//	//arr2[1] = 1;
//	////...
//	//完全初始化
//	//int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//
//	//不完全初始化
//	//int arr3[10] = {1,2,3};
//	//int arr4[10] = { 0 };
//	int arr5[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	return 0;
//}

//1 1 2 3 5 8 13 21 34 55 ...
//int main()
//{
//	int fib[20] = {1,1};//表示前20个斐波那契数
//
//	int i = 0;
//	for (i = 0; i < 18; i++)
//	{
//		fib[i + 2] = fib[i + 1] + fib[i];
//	}
//
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", fib[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	//排序使得arr数组中的元素，从小到大排列
//	//1 2 3 4 5 6 7 8 9 10
//	//起泡排序-冒泡排序
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		//一趟冒泡排序的过程
//		//确定一趟冒泡排序比较的对数
//		int j = 0;
//		for (j = 0; j < 9-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4];
//	float pay[3][6];
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

int main()
{
	int arr[3][4];
	arr[3][4];//第4行，第5列的元素-越界访问
	int i = 0;
	//确定-行
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = 5;
		}
	}

	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
	//	}
	//}

	return 0;
}