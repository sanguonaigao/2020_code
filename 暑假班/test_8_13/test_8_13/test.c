#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("不是奇数\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	if (4 == a)
//	{
//		printf("a == 4\n");
//	}
//	//if (a = 4)//bug
//	//{
//	//	printf("a == 4\n");
//	//}
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}


//
//int main()
//{
//	int age = 10;
//	
//	if (age < 16)
//	{
//		printf("少年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 16 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	return 0;
//}

//int main()
//{
//	//int age = 20;
//	//if (age < 18)
//	//	printf("未成年\n");
//
//
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	10;
//	;//空语句
//	return 0;
//}

//结构体关键字

//学生类型
//struct Stu
//{
//	char name[200];//名字
//	short age;//年龄
//};
//
////.   结构体对象.结构体的成员
////->  结构体指针->结构体的成员
//
//int main()
//{
//	//char arr[] = "hello";
//	struct Stu s1 = {"张三", 30};//s是学生的变量
//	struct Stu * ps = &s1;
//	//s1.name
//	printf("%s %d\n", (*ps).name, (*ps).age);
//
//	//printf("%s %d\n", ps->name, ps->age);
//
//	//printf("%s %d\n", s1.name, s1.age);
//
//	//struct Stu s2;//s是学生的变量
//
//	return 0;
//}

//指针

//int main()
//{
//	char ch = 'b';
//	char* pc = &ch;
//	*pc = 'w';
//	printf("%c\n", ch);
//
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 0;//* - 解引用操作符
//	//
//	//printf("%d\n", a);//10 -11?
//
//	return 0;
//}

//int main()
//{
//	int a = 100;//创建变量a，要向内存申请4个字节的空间
//	int * p = &a;//& 取地址操作符 p就是一个指针变量
//
//	char ch = 'w';
//	char * pc = &ch;
//
//	//在锤子的眼里什么都是钉子
//	//在指针的眼里，什么都是地址
//
//	//%p - 打印地址 - 16进制的
//	//printf("%p\n", &a);
//
//	return 0;
//}
//#define定义符号常量
//#define MAX 100

//#define 定义宏
//加法的宏
//#define ADD(X, Y) ((X)+(Y))
//
//
//int main()
//{
//	//int a = MAX;
//	//printf("%d\n", a);//100
//	int sum = ADD(3,5);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//声明一下函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

////声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//1. static修饰局部变量

//void test()
//{
//	//static修饰局部变量
//	static int i = 1;
//	i++;
//	printf("%d ", i);
//}
//
//int main()
//{
//	int  i = 0;
//	//循环10次
//	while (i < 10)
//	{
//		test(); 
//		i++;
//	}
//	return 0;
//}

