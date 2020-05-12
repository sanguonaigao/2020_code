#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int Fac(int n)
//{
//	if (n < 0)
//		printf("input error\n");
//	else if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}


//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//n>=0
//	int ret = Fac(n);//求n的阶乘
//	printf("%d\n", ret);
//	return 0;
//}

//
//
//int age(int n)
//{
//	if (n == 1)
//		return 10;
//	else
//		return (age(n - 1) + 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//age函数求第n个人的年龄
//	int ret = age(3);
//	printf("%d\n", ret);
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//
//int Max(int x, int y)
//{
//	return (x>y?x:y);
//}
////int Max4(int a, int b, int c, int d)
////{
////	int m = Max(a, b);
////	m = Max(m, c);
////	m = Max(m, d);
////	return m;
////}
//
//int Max4(int a, int b, int c, int d)
//{
//	int m = 0;
//	m = Max(Max(Max(a, b), c), d);
//	return m;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	printf("请输入4个整数:>");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	
//	int max = Max4(a,b,c,d);
//
//	printf("%d\n", max);
//	return 0;
//}
//void test2()
//{
//	printf("test2\n");
//}
//
//void test()
//{
//	test2();
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//#include "add.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum = Add(a, b);
//	
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



//#include <string.h>
//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//函数的声明
//int Add(int, int);
//int Add(int x, int y);
//int Sub(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int Sub(int x, int y)
//{
//	int z = x - y;
//	return z;
//}



