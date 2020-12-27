#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			//打印一行
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//

//
//int main()
//{
//	int n = 0;
//	//arr是数组
//	int arr[50] = { 0 };
//	int m = 0;//要插入的元素
//
//	//0-
//	//输入
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	//插入
//	for (i = n - 1; i >= -1; i--)
//	{
//		if (arr[i]>m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	/*if (i == -1)
//		arr[0] = m;*/
//	//输出  
//	for (i = 0; i<n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[101] = { 0 };//1-100
//	//0 1 2 3 4 5 6 7 8 9 
//	//0 1 2 3 4
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		//0-n之间的数组存放到数组中了
//		for (i = 0; i<n; i++)
//		{
//			arr[i] = i;
//		}
//		//筛选
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//					arr[j] = 0;
//			}
//		}
//		int count = 0;//个数
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] == 0)
//				count++;
//			else
//				printf("%d ", arr[i]);
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}




//判断i是否为素数
//如果是素数返回1
//  不是素数返回0
//素数是只能被1和i整除的整数
//7 1 7
//拿2->i-1 试除i
//如果整除了,i就不是素数
//如果所有的2->i-1之间的数组都不能整除i，i就是素数
//试除法
//
#include <math.h>

int is_prime(int i)
{
	int j = 0;
	//m = a*b
	//16 = 2*8
	//16 = 4*4

	for (j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	//打印n内的所有素数
	//1-n 之间的数组是素数就打印
	int i = 0;
	for (i = 3; i <= n; i+=2)
	{
		//判断i是否为素数
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}