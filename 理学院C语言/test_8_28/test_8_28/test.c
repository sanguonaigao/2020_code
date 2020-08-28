#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
//sizeof - 操作符
//计算的某个对象或者类型的大小
//只关心空间大小，不关心内容
//void test(int arr[])
//{
//	printf("test:%d\n", sizeof(arr));
//}
//
//int main()
//{
//	int *p = (int*)malloc(100);
//	printf("%d\n", sizeof(p));
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//	int arr[7] = { 0 };
//	printf("%d\n", sizeof(arr));//?
//	test(arr);
//	return 0;
//}
//strlen - 库函数s
//求字符串长度
//必须要知道'\0'的位置

//
//int main()
//{
//	//char arr[] = "hello";
//	char arr[] = { 'a', 'b', 'c' };
//
//	printf("%d\n", strlen(arr));//
//	printf("%d\n", sizeof(arr));//
//
//	return 0;
//}
//

//void test()
//{
//	printf("hello\n");
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//函数
//形参-形式参数
//形参要和实参保持类型一致
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//实参-实际参数
//	//变量/常量/表达式/函数
//	print(arr, sz);
//
//	return 0;
//}

//宏的基本概念和实现
//#define //预处理指令
//1. #define 定义常量
//2. #define 定义宏

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}

//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//#define DOUBLE(X) ((X)+(X))

//#define SQUARE(X) ((X)*(X))

//
//int main()
//{
//	//int m = 3 * DOUBLE(5);
//	//int m = 3 * 5 + 5;
//	int m = SQUARE(1 + 2);
//	//int m = (1 + 2 * 1 + 2);
//	printf("m = %d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int m = Max(a, b);
//	int m = MAX(a, b);
//	//int m = ((a) > (b) ? (a) : (b));
//	printf("m = %d\n", m);
//	return 0;
//}
//
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	//MAX = 200;//ERR
//	printf("%d\n", a);
//	return 0;
//}


//结构体
//学生
//名字+年龄
//
//struct Stu
//{
//	char name[30];
//	short age;
//}s2;
//
//int main()
//{
//	//struct Stu s1 = {"张三", 25};
//	////s1.name = "张四";//err
//	//strcpy(s1.name, "张四");
//	//s1.age = 26;
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	struct Stu s1 = { "张三", 25 };
//	struct Stu* ps = &s1;
//
//	//(*ps).age = 20;
//	//printf("%d\n", (*ps).age);
//	ps->age = 22;
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->name);
//
//	//.   结构体变量.成员名
//	//->  结构体指针->成员名
//
//
//	return 0;
//}