#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//声明外部函数
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);

	return 0;
}
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	//循环执行10次
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//介绍关键字
//告诉大家 - 自己创建的变量名不能是关键字
//int main()
//{
//	int typedef;
//	return 0;
//}


//张三
//小三
//
//typedef unsigned int uint;
////男
////男士
//
//int main()
//{
//	unsigned int num = 10;
//	uint num2 = 20;
//	return 0;
//}
////
//int main()
//{
//	register int a = 10;//建议把a放在寄存器中去
//	//编译器
//	return 0;
//}
//全局变量的作用域 - 整个工程

//使用extern 声明一下来自外部的符号
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	{
//		auto int a = 10;//通常把auto省略
//	}
//
//	return 0;
//}
//
//int main()
//{
//	printf("hello bit\n");//函数调用操作符
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//
//	arr[4] = 6;//[]就是下标引用操作符
//
//	return 0;
//}

//int main()
//{
//	//逗号表达式从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//
//	int a = (3+1,5+2,8+1,2-4);
//
//	printf("%d\n", a);//-2
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	/*if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}*/
//
//	max = (a > b ? a : b);
//	printf("max = %d\n", max);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a && b;//逻辑与
//	int c = a || b;//逻辑或
//
//	printf("c = %d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("a = %d\n", a);
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = a--;
//
//	printf("a=%d b=%d\n", a, b);//9 10
//
//	/*int b = --a;
//	printf("a=%d b=%d\n", a, b);*/
//
//	//int b = ++a;//前置++，先给a的值+1，再使用
//	//printf("a = %d b = %d\n", a, b);//a=11 b=11
//
//	//int b = a++;//后置++，先使用a的值，再让a加1
//	//printf("a = %d b = %d\n", a, b);//a=11 b=10
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 补码
//	//11111111111111111111111111111110 - 反码
//	//10000000000000000000000000000001 - 原码
//	printf("%d\n", ~a);//-1
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//把十进制的数字可以转换成二进制
//	//二进制有三种表示形式：原码、反码、补码
//	//二进制位中最高为是符号位
//	//最高位是1，表示负数
//	//最高位是0，表示正数
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//
//	//整数在内存中存储的是二进制表示的补码
//	//
//	//正整数的原码、反码、补码相同
//	//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'w';
//
//	//sizeof 是一个操作符
//	//sizeof 计算的是变量所占内存空间的大小
//	
//	printf("%d\n", sizeof(a));//
//	printf("%d\n", sizeof(int));//
//
//	printf("%d\n", sizeof(c));//
//	printf("%d\n", sizeof(char));//
//
//	return 0;
//}
//C语言如何区分真和假的呢？
//0 - 表示假
//非0 - 表示真
//

//int main()
//{
//	int a = -10;
//	int b = a;
//	printf("%d\n", b);
//
//	//int a = 10;//
//	//int b = 0;
//	//printf("%d\n", a);//10
//	//printf("%d\n", !a);//0
//	//printf("%d\n", b);//0
//	//printf("%d\n", !b);//1
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//a = a + 5;//1
//	//a += 5;   //2
//	//a = a - 3;
//	//a -= 3;
//	a = a >> 1;//1
//	a >>= 1;//2
//	printf("a = %d\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	//&
//	int a = 3;
//	int b = 5;
//
//	int c = a^b;//按（二进制）位异或
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//6
//
//	//int c = a | b;//按（二进制）位或
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//7
//
//	//int c = a&b;//按（二进制）位与
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001 - 1
//	//
//	printf("%d\n", c);
//
//	return 0;
//}
//
//int main()
//{
//	//整形是4个字节的 - 32bit位
//	int a = 8;
//	//本质上移动的是a的二进制位
//	int b = a >> 1;//把a的值向右移动一位
//	printf("%d\n", b);
//
//	//8 - 10进制
//	//00000000000000000000000000001000
//
//
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 7 / 2);//商
//	printf("%d\n", 7 % 2);//% - 取模 - 取模得到的是余数
//
//	return 0;
//}

//%d
//%c
//%s
//%f - 打印小数的

//int main()
//{
//	printf("%f\n", 7 / 2.0);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a + b;
//	a - b;
//	a * b;
//	a / b;
//
//	return 0;
//}

//int main()
//{
//	//初始化数组arr的前5个元素为1,2,3,4,5，剩下的5个元素默认会被初始化为0
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//一次一个一个的打印的
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", arr[9]);
//
//
//	return 0;
//}


//不能通用了
//A - 不好的写法
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		printf("较大值是：%d\n", x);
//	}
//	else
//	{
//		printf("较大值是：%d\n", y);
//	}
//	return 0;
//}

//创造一个函数-get_max

//声明函数
//int get_max(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//10 20
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}


//
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));//7
//	return 0;
//}


//
//#include <stdio.h>
//#include <string.h>

//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
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
//
//	return 0;
//}
//int num = 10;
//int main()
//{
//	int num = 1;
//
//	printf("num = %d\n", num);//1
//	return 0;
//}
//
