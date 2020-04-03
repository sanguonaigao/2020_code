#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
//
//int main()
//{
//	double a=0.0, b=0.0, c=0.0;
//	double disc = 0.0;
//	double p = 0.0;
//	double q = 0.0;
//	double x1 = 0.0;
//	double x2 = 0.0;
//
//	scanf("%lf%lf%lf", &a, &b, &c);
//	disc = b*b - 4*a*c;
//	if (disc < 0.0)
//	{
//		printf("方程没有实根\n");
//	}
//	else
//	{
//		p = (-b) / (2 * a);
//		q = sqrt(disc) / (2 * a);
//		x1 = p + q;
//		x2 = p - q;
//		printf("x1=%7.2lf x2=%7.2lf\n", x1, x2);
//	}
//
//	return  0;
//}
//
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	scanf("%lf%lf", &a, &b);
//
//	if (a > b)
//	{
//		//交换
//		double tmp = 0.0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	printf("%lf %lf\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	//从小到大输出3个值
//	//a b 的较小值是a
//	if (a > b)
//	{
//		 double tmp = 0.0;
//		 tmp = a;
//		 a = b;
//		 b = tmp;
//	}
//	//a c 的较小值是a
//	if (a > c)
//	{
//		double tmp = 0.0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	//b c
//	if (b > c)
//	{
//		double tmp = 0.0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%lf %lf %lf\n", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 90)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老不死\n");
//	}
//
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//}
//	//else
//	//{
//	//	printf("成年\n");
//	//}
//
//
//	/*if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}*/
//	//{} - 代码块
//
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//if (x > 0)
//	//	y = 1;
//	//else if (x == 0)
//	//	y = 0;
//	//else
//	//	y = -1;
//	//if (x > 0)
//	//	y = 1;
//	//else
//	//{
//	//	if (x == 0)
//	//		y = 0;
//	//	else
//	//		y = -1;
//	//}
//	//
//	//if (x >= 0)
//	//{
//	//	if (x > 0)
//	//		y = 1;
//	//	else
//	//		y = 0;
//	//}
//	//else
//	//{
//	//	y = -1;
//	//}
//	if (x > 0)
//		y = 1;
//
//	if (x == 0)
//		y = 0;
//	
//	if (x < 0)
//		y = -1;
//
//	printf("%d\n", y);
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 0;
//	//int c = a && b;
//	//int c = a || b;
//	int c = !a;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	//int d = (a++) && (b--) && (c > 2);
//
//	//int d = (a++) && (--b) && (c > 2);
//
//	int d = (a++) || (--b) || (c > 2);
//
//	printf("a=%d b=%d c=%d d=%d\n", a , b, c, d);
//
//	return 0;
//}

//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		printf("%d 是闰年\n", year);
//	}
//
//	/*if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//		{
//			printf("%d 是闰年\n", year);
//		}
//	}
//	if (year % 400 == 0)
//	{
//		printf("%d 是闰年\n", year);
//	}*/
//	return 0;
//}

//逻辑型变量 - 布尔变量
//C99 - 并不是所有编译器都支持
#include <stdbool.h>

int main()
{
	int a = 20;
	_Bool b = 3<5;//真 -true，假-false
	bool b2 = 3 > 6;
	printf("%d\n", b2);
	
	return 0;
}