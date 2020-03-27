#define _CRT_SECURE_NO_WARNINGS 1

//二维数组的使用
#include <stdio.h>

//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, {5} };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//
//
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	//确定冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void PrintArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//*(arr+i)
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//写一个冒泡排序函数，将数组arr排成升序
//	PrintArr(arr, sz);
//	BubbleSort(arr, sz);
//	PrintArr(arr, sz);
//
//	return 0;
//}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	//数组名是什么？
	//数组名是数组首元素的地址
	//注意：有两个例外
	//1. sizeof(arr) - sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//2. &arr - &数组名 - 数组名表示整个数组， &数组名取出的是整个数组的地址
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);


	//printf("%d\n", *arr);
	return 0;
}