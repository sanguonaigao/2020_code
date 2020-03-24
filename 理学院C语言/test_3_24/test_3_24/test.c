#define _CRT_SECURE_NO_WARNINGS 1

//
//int main()
//{
//	//int a = 3 + 5 * 4;
//	int a = 3 + 5 + 4;
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 65 && ch <= 90)
//	{
//		//大写字母转换为小写字母输出
//		ch = ch+32;
//		printf("%c\n", ch);
//	}
//	else
//	{
//		//如果是非小写字母直接打印
//		printf("%c\n", ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'A' && ch <= 'Z')
//	{
//		//大写字母转换为小写字母输出
//		ch = ch + 32;
//		printf("%c\n", ch);
//		printf("%d\n", ch);//打印出的是ascii值
//
//	}
//	else if (ch>='a' && ch<='z')
//	{
//		//如果是非小写字母直接打印
//		ch = ch - 32;
//		printf("%c\n", ch);
//		printf("%d\n", ch);//打印出的是ascii值
//	}
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//int a = int(3.14)//err
//	printf("a = %d\n", a);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);//函数调用语句
//	return 0;
//}
//
//int main()
//{
//	3 + 5;
//	;//空语句
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (a == 5)
//		;
//	else
//		printf("hehe\n");
//	return 0;
//}
#include <math.h>
//
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double s = 0.0;
//	double area = 0.0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	s = (a + b + c) / 2;
//	//计算面积
//	//sqrt - 开平方的库函数
//	//math.h
//	area = sqrt(s*(s - a)*(s - b)*(s - c));
//	printf("a=%lf\tb=%lf\tc=%lf\n", a, b, c);
//	printf("area = %lf\n", area);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//赋值
//	a = a + 2;//1 
//	a += 2;   //2 - 复合赋值符
//	a = a - 3;
//	a -= 3;
//	//+= -= *= /= %= &= |= ^= >>= <<=
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	a = b + 2;
//	//左值必须是一块内存空间
//	a = b;//b就是右值 - 强调的是值本身
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 289;
//	// ‭00000000‭000000000000000100100001‬;
//	char c = 'w';
//	c = a;//4个字节 --> 1个字节的空间中
//
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//int b = 0;//局部变量不初始化，那里边放的是一个随机值
//	//b += 10;
//	//int c = 0;
//	int a = 0, b = 2, c = 4;
//
//	printf("b=%d\n", b);
//}

//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	printf("%lf %lf %lf\n", a, b, c);
//
//	//double disc = b*b - 4*a*c;//
//	//double x1 = (-b + sqrt(disc)) / (2 * a);
//	//double x2 = (-b - sqrt(disc)) / (2 * a);
//	
//	//printf("x1=%7.2lf\tx2=%7.2lf\n", x1, x2);
//	
//	return 0;
//}
//
//VS
//gcc
//
int main()
{
	printf("%d\n", 10);

	return 0;
}