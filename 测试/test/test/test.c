#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int is_leap_year(int y)
{
	return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是否为闰年
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}


//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//#include <math.h>
//
//int max_odd = 0;
//int max_eve = 0;
//
//void find_odd_eve(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			max_odd = arr[i];
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			max_eve = arr[i];
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		//如数是奇数并且大于
//		if ((arr[i] % 2 == 1) && arr[i]>max_odd)
//		{
//			max_odd = arr[i];
//		}
//		if ((arr[i] % 2 == 0) && arr[i]>max_eve)
//		{
//			max_eve = arr[i];
//		}
//	}
//}
//int main()
//{
//	int n = 0;//存放个数
//	int arr[1024] = { 0 };//存放数据的数组
//	printf("请输入元素个数：>");
//	scanf("%d", &n);
//	int i = 0;
//	printf("请连续输入数据，中间空格隔开：>");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//查找奇偶数
//	find_odd_eve(arr, n);
//	printf("max_odd = %d max_eve = %d\n", max_odd, max_eve);
//}

//double y(double x, int n)
//{
//	if (n == 1)
//		return sqrt(x);
//	else
//		return sqrt(x + y(x, n - 1));
//}
//
//int main()
//{
//	int n = 0;
//	double x = 0;
//	scanf("%lf%d", &x, &n);
//	double ret = y(x, n);
//	printf("%lf\n", ret);
//	return 0;
//}