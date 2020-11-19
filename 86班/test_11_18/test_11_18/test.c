#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//业务处理
//	//C++注释
//	/*C风格的注释
//	int a = 10;
//	int b = 20;
//	*/
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特,你要好好学习吗？\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line<=20000)
//	{
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//	if (line > 20000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}

//f(x, y) = x+y;
//
//int Add(int m, int n)
//{
//	int ret = m + n;
//	return ret;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	scanf("%d%d", &x, &y);
//	//sum = x + y;
//	sum = Add(x, y);
//	printf("sum = %d\n", sum);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//int d;
//
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//数组
//	//int arr[10];
//	/*arr[4] = 40;
//	printf("%d\n", arr[4]);*/
//	/*int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}*/
//	//float farr[4] = {1.0,2.0,3.0,4.0};
//	//int d;
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 3;
//	int c = a%b;
//
//	//double c = a / 3.0;
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 20;
//	//二进制位
//	//4个字节 = 32bit位
//	//00000000000000000000000000010100
//	//00000000000000000000000000001010 = 10
//	//
//	//00000000000000000000000000001111
//	//
//	//8421
//	int b = a >> 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//& - 按（2进制）位与
//	//int c = a^b;//^ - 按二进制位异或
//	int c = a | b;//| - 按二进制位或
//	//011
//	//101
//	//111
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//初始化
//	a = 20;//赋值
//	//== 
//	a = a + 3;
//	a += 3;
//
//	a = a & 3;
//	a &= 3;
//
//	return 0;
//}


//int main()
//{
//	//int a = 3 + 5;
//	//单目操作符
//	int flag = 0;
//	printf("%d\n", flag);
//	printf("%d\n", !flag);
//
//	//0表示假，非0都是真
//	/*if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	a = +10;
//	//&a;
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//err
//	return 0;
//}


//int main()
//{
//	//-1;
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	//
//	int a = 0;
//	//000000000000000000000000000000000
//	//111111111111111111111111111111111
//	//111111111111111111111111111111110
//	//100000000000000000000000000000001
//	//
//	printf("%d\n", ~a);//-1
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	int a = (++i) +(++i) + (++i);
//	printf("%d\n", a);
//
//	/*int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//
//	}*/
//	/*int a = 10;
//	int b = --a;
//	printf("a=%d b=%d\n", a, b);*/
//	/*int a = 10;
//	int b = a--;
//	printf("a=%d b=%d\n", a, b);*/
//
//	//int b = ++a;//前置++,先++，后使用
//	//printf("a=%d b=%d\n", a, b);
//
//	//int b = (a++);//后置++，先使用，再++
//	//printf("a=%d b=%d\n", a, b);//11 10
//	//printf("%d\n", a++);
//	//printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	//int a = int(3.14);///err
//	printf("a=%d\n", a);
//
//	return 0;
//}
//

//int main()
//{
//	int a = 1 & 2;
//	//01
//	//10
//	//00
//	int b = 1 && 2;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//条件操作符 = 三目操作符

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b) ? (a) : (b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 2;
//	int c = 3;
//	//      //a=4   b=-1       c=1        c=-3
//	int d = (a = 4, b = a - 5, c = b + 2, c -= 4);
//	//逗号表达式要从左向右依次计算，但是整个表达式的结果是
//	//最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	arr[3] = 'w';//下标引用操作符
//	int ret = Add(2, 3);//函数调用操作符
//
//	return 0;
//}


//int main()
//{
//	//int char;//err
//	//int _2b;//字母+数字+下划线，不能以数字开头
//	int a = 0;
//
//	return 0;
//}

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	register int a = 10;//建议编译器把a放在寄存器中
//	signed int a = 10;
//	a = -10;
//	unsigned int b = -1;
//
//	return 0;
//}

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}
//
//void test(void)
//{
//	printf("hehe\n");
//	return;
//
//	printf("haha\n");
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}
//static 修饰局部变量-改变了局部变量的生命周期
//
//static 修饰全局变量 - 改变了变量的链接属性（外边链接属性->内部链接属性，效果是作用域的变化）
//static 修饰函数 - 改变的函数的链接属性-（外边链接属性->内部链接属性）
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
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//
