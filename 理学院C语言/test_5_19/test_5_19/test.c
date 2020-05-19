#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern void Input();
extern void DelChar(char arr[], char ch);

int main()
{
	char ch = 0;
	char arr[200] = { 0 };
	Input(arr);
	printf("输入要删除的字符:>");
	scanf("%c", &ch);
	DelChar(arr, ch);
	printf("%s\n", arr);
	return 0;
}

//函数的外部声明
//extern int Add(int a, int b);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//
//void test1()
//{
//	extern int a;
//	printf("%d\n", a);
//}
//
//void test2()
//{
//	extern int a;
//	printf("%d\n", a);
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}
//int a = 0;//定义型声明

//extern int a; //引用型声明
//
//int main()
//{
//	return 0;
//}
//
//int a = 0;

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	
//	return 0;
//}


//int a = 10;
//int b = 20;
//
//extern int Add();
//
//int main()
//{
//	//printf("g_val = %d\n", g_val);
//	int ret = Add();
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//extern int a, b, c;
//
//int Max()
//{
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	return max;
//}
//
//int  main()
//{
//	scanf("%d%d%d", &a, &b, &c);
//	int max = Max();
//	printf("max = %d\n", max);
//	return 0;
//}
//int a, b, c;

//希望扩展一下g_val的使用范围-作用域

//声明外部符号
//extern int g_val;
//
//void test()
//{
//	printf("test::g_val = %d\n", g_val);
//}
//int main()
//{
//	printf("main::g_val = %d\n", g_val);
//	test();
//	return 0;
//}
//
//int g_val = 20;
//...

//int g_val = 20;
//
//void test()
//{
//	printf("test::g_val = %d\n", g_val);
//}
//int main()
//{
//	printf("main::g_val = %d\n", g_val);
//	test();
//	return 0;
//}

//寄存器变量
//int main()
//{
//	int a = 10;//a 被存储在内存（栈区）中
//	register int b = 10;//定义寄存器变量-建议把b存放在寄存器中
//	//把重复大量使用的变量，建议可以放在寄存器中
//
//	return 0;
//}
//int Fac(int n)
//{
//	static int ret = 1;//可以重复调用test函数过程中的值
//	ret *= n;
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		int ret = Fac(i);//求i的阶乘
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//
//int g_a;
//
//void test()
//{
//	static int a;//静态局部变量-默认初始化0
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	//printf("%d\n", g_a);
//	//int num;//默认是随机值
//	//printf("num = %d\n", num);
//	/*int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;//局部变量 - 自动变量（auto）
//	printf("a = %d\n", a);
//
//	return 0;
//}