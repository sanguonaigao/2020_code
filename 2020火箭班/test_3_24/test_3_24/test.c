#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//strcpy -- string copy - 字符串拷贝
//char * strcpy(char * destination, const char * source);
//字符串操作函数
//int main()
//{
//	char arr1[20] = "##########";
//	//bit\0######
//	char arr2[] =   "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//memset
//memory - 内存 set - 设置
//memset - 内存设置
//

//void * memset(void * ptr, int value, size_t num);


//int main()
//{
//	char arr[] = "hello bit";//***** bit
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//
//
//int get_max(int x, int y)
//{
//	//return (x > y ? x : y);
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//
//	max = get_max(a, b);
//	//max = get_max(a, get_max(30, 5));
//
//	printf("max = %d\n", max);
//	return 0;
//}
//err
//
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
////ok
//void Swap2(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;//等价于tmp = a;
//	*pa = *pb;//a = b;
//	*pb = tmp;
//	//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/	
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//拿到了a的地址
//	*pa = 20;
//	printf("a = %d\n", a);
//	return 0;
//}

#include <math.h>
//
//int is_prime(int n)
//{
//	//判断n是否为素数
//	//2->n-1
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	//是素数
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//

//
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
//}
//
//
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//                //int* arr
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//数组传参的时候，传过去一个数组名，本质上传过去的是数组的首元素的地址 &arr[0]
//	int ret = binary_search(arr, k, sz);//找到了返回下标，找不到返回-1
//	//数组传参发生降级-变成首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//
//	return 0;
//}
//
//int main()
//{
//	//1
//	int len = strlen("bit");
//	printf("len = %d\n", len);
//
//	//2
//	printf("len = %d\n", strlen("bit"));
//
//	return 0;
//}
//
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}


#include "calc.h"

int main()
{
	int a = 10;
	int b = 20;

	//函数的调用
	int c = Sub(a, b);//
	int sum = Add(a, b);//

	printf("sum = %d\n", sum);

	return 0;
}

