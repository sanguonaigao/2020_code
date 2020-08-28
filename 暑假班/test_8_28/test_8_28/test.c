#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void print_arr(int arr[3][4], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9};
//	print_arr(arr, 3, 4);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//绝大部分情况下：数组名是首元素的地址
//	//有2个例外：
//	//sizeof(数组名) - 数组名是表示整个数组，sizeof(数组名)计算的是整个数组的大小
//	//&数组名  - 数组名表示整个数组，&数组名 取出的是 整个数组的地址
//
//	printf("%p\n", arr);
//	printf("%d\n", *arr);
//
//	printf("%p\n", &arr[0]); 
//
//	return 0;
//}
//
//错误的示范
////形参arr本质上应该是一个指针
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//排序-排成升序
//	//arr是数字
//	//数字传参的时候，数组名会发生降级
//	//数据名降级变成了数组首元素的地址
//	//数组传参实际上传的是数组首元素的地址
//	print_arr(arr, sz);
//
//	bubble_sort(arr, sz);//冒泡排序的方式
//
//	print_arr(arr, sz);
//	return 0;
//}

//
//int main()
//{
//	int arr1[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int*p = &arr1[0][0];
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int*p = arr;//数组名是数组首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0;//行数
//	int j = 0;//列数
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr1[i][j]);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	//int arr1[3][4] = {1,2,3,4,5};
//	//二维数字，及时你给他初始化了，行数可以省略，但是列数是不能省略的
//	int arr1[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0;//行数
//	int j = 0;//列数
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	//double arr2[3][5];
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//0 1 2 3 4 ...
//	int i = 0;
//	//计算一下数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9};
//	//0 1 2 3 4 ...
//	int i = 0;
//	//计算一下数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//不完全初始化，剩余的元素默认初始化为0
//	//int array[10] = {1,2,3};//创建并初始化
//	//int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int arr3[10] = { 0 };
//	//int arr4[] = { 1, 2, 3, 4, 5 };
//	//int arr5[];//err
//	char ch1[] = { 'a', 'b', 'c', 'd' };
//	char ch2[] = "abcd";
//	printf("%d\n", sizeof(ch1));//
//	printf("%d\n", sizeof(ch2));//
//	printf("%d\n", strlen(ch1));//
//	printf("%d\n", strlen(ch2));//
//
//	//char ch[7];
//	
//	//int n = 10;
//	//int arr1[n] = {0};//err
//
//	return 0;
//}