#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

//写一个函数判断一年是不是闰年
//是闰年返回1
//不是闰年返回0

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断闰年并打印
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//写一个函数可以判断一个数是不是素数
//是素数返回1
//不是素数返回0
//
//int is_prime(int n)
//{
//	int i = 0; 
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;//不是素数
//	}
//
//	return 1;//是素数
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int get_max(int x, int y)
//{
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
//	int max = get_max(1, 2);
//	//max = get_max(1, a);
//	//max = get_max(1+4, get_max(2,3));
//
//	return 0;
//}
////
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//void Swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);//10 20
//	//写一个函数把x和y的值进行交换
//	printf("交换前：x=%d y=%d\n", x, y);//x=10 y=20
//	//传值调用
//	Swap1(x, y);
//	//传址调用
//	Swap2(&x, &y);
//
//	printf("交换后：x=%d y=%d\n", x, y);//x=20 y=10
//	//int a = 10;
//	//int *pa = &a;
//	//*pa = 20;
//	//printf("%d\n", a);
//	return 0;
//}



//bug
//找bug的过程叫：调试

//
//形参-形式参数
//当实参传给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
//
//err
//void Swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);//10 20
//	//写一个函数把x和y的值进行交换
//	printf("交换前：x=%d y=%d\n", x, y);//x=10 y=20
//	//交换
//	//实参-实际参数
//	Swap1(x, y);
//	printf("交换后：x=%d y=%d\n", x, y);//x=20 y=10
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}

//void 表示这个函数不返回任何值
//void test()//函数是可以没有参数的
//{
//	printf("test\n");
//}
//
//int main()
//{
//	test();
//
//	//写一个函数找出2个数的较大值
//	//int num1 = 0;
//	//int num2 = 0;
//
//	//scanf("%d%d", &num1, &num2);
//
//	////自己创建的自定义函数
//	//int max = get_max(num1, num2);
//
//	//printf("max = %d\n", max);
//
//	return 0;
//}

//void * memset(void * ptr, int value, size_t num);
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}


//string copy - 字符串拷贝
//char * strcpy(char * destination, const char * source);

//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);//调用函数
//	printf("%s\n", arr2);
//
//	return 0;
//}

//f(x) = 2*x+1;


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	//
//	return 0;
//}

//写一个代码：打印100~200之间的素数
//素数是只能被1和它本身整除的数字

//
//《素数求解的N种境界》
//

//
//试除法
//

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//可以拿2->i-1的数字试除
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt是一个库函数，对i开平方 - math.h
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标记不是素数
//				break;
//			}
//		}
//		//1、2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//可以拿2->i-1的数字试除
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt是一个库函数，对i开平方 - math.h
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标记不是素数
//				break;
//			}
//		}
//		//1、2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//可以拿2->i-1的数字试除
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标记不是素数
//				break;
//			}
//		}
//		//1、2
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//可以拿2->i-1的数字试除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		//1、2
//		if (j >= i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//打印1000年到2000年之间的闰年
//闰年判断的规则：
//1. 能被4整除且不能被100整除是闰年
//2. 能被400整除也是闰年


//
//int main()
//{
//	int year = 0;
//	int count = 0;//计数器
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年，是闰年就打印
//		if (((year%4==0)&&(year%100!=0)) || (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}