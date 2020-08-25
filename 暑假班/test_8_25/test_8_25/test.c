#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//#include "calc.h"

int count = 0;

//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//非递归方式
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	//50 - 2^0
	//49 48 = 2^1
	//48 47 47 46 2^2
	//47 46 46 45 46 45 45 44 2^3
	//2^4
	//....
	//
	
	printf("ret = %d\n", ret);

	return 0;
}

//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}

//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//编写函数不允许创建临时变量，求字符串的长度。

//int my_strlen(char* str)
//{
//	int count = 0;//计数器-统计字符的个数
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);//3
//	return 0;
//}
//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0
//3

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234 ---> 1 2 3 4
//	//递归如何求解这个问题呢？
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//
//	//写代码
//	//1234%10 = 4
//	//1234/10=123
//	//123%10=3
//	//123/10=12
//	//%10 /10
//	//
//	return 0;
//}

//int main()
//{
//	main();
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	
//	ret = Sub(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}



//声明一下

//声明函数-告诉编译器有一个函数，名字叫Add，2个参数都是int类型，函数的返回类型是int
//int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
////函数定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//
//	return 0;
//}

//int main()
//{
//	//1
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//2 - 链式访问
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}


//
//void Add(int* p)
//{
//	*p = *p+1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1
//
//	Add(&num);
//	printf("num = %d\n", num);//2
//	return 0;
//}

//错误的示范
//int binary_search(int arr[], int k)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
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
//	//
//	return -1;//找不到了
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//被查找数的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//实现一个函数在arr中查找k
//	//如果找到了，返回下标
//	//如果找不到，返回-1
//	//实参
//	//实际上数组传参的试试，传递的是数组首元素的地址
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到指定元素\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}



//int test()
//{
//	if (1 > 2)
//		return 0;
//	printf("hehe\n");
//	return 1;
//}
//
//int main()
//{
//	int ret = test();
//	return 0;
//}
//形参
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
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
//	//
//	return -1;//找不到了
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//被查找数的数字
//	//实现一个函数在arr中查找k
//	//如果找到了，返回下标
//	//如果找不到，返回-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//实参
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定元素\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//void get_max(int a, int b)
//{
//	int max = (a > b) ? (a) : (b);
//	printf("%d\n", max);
//}
//
//int get_max(int a, int b)
//{
//	int max = (a > b) ? (a) : (b);
//	return max;
//}
//
//int main()
//{
//	//函数 - 求2个数的较大值
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}