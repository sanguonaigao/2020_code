#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//创建学生类型
//名字
//年龄
//地址

//struct 结构体关键
//创建学生类型

//struct Student
//{};

//定义日期类型
struct Date
{
	int year;
	int month;
	int day;
};

struct Stu
{
	char name[20];
	int age;
	char addr[30];
	struct Date birthday;
};

struct Book
{
	char id[20];
	char name[15];
	float price;
};

int main()
{
	struct Stu s;

	//int float double
	//学生
	//书
	//int age;//
	//创建一个学生：张三

	return 0;
}

//动态内存分配
//自主申请
//自主释放
//#include <stdlib.h>
//
//void check(int*p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(p + i) < 60)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//}
////<C和指针>
////<c语言深度解剖>
//
//int main()
//{
//	//存放成绩用整形
//	//5个整形的空间
//	int*p = (int*)malloc(5*sizeof(int));
//	if (p == NULL)
//	{
//		printf("空间开辟失败\n");
//		return -1;
//	}
//	//输入5个学生的成绩
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", p + i);
//	}
//	//检查找出60分以下的成绩
//	check(p, 5);
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	float f = 3.14f;
//
//	/*void* p = &a;
//	p + 1;
//	*p = 20;
//	p = &f;*/
//
//	//int*p = &a;
//	//*p = 20;
//	//p = &f;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pi = &a;
//	char* pc = NULL;
//
//	void* pv;//无类型指针
//
//	return 0;
//}
//
//int main()
//{
//	//开辟一块连续的40个字节的空间
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("开辟失败\n");
//		return -1;
//	}
//	//打印开辟好的空间内容
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//发现空间不够使用了
//	//想调整空间大小
//	int*ptr = (int*)realloc(p, 15*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	//万一开辟失败了
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//申请10个整形的空间
//	int arr[10] = { 0 };//栈区 10*sizeof(int) = 40
//	//动态申请-堆区
//	int* p = (int*)malloc(40);//向堆区申请40个字节的空间
//	//开辟失败返回NULL指针
//	if (p == NULL)
//	{
//		printf("动态内存申请失败\n");
//		return -1;
//	}
//	//使用动态申请的空间了
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放空间
//	free(p);
//
//	//动态内存开辟-内存泄漏
//
//	p = NULL;
//
//	return 0;
//}


//main函数的参数
//命令行参数

//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//
//	return 0;
//}

//envp
//环境变量
//
//int main(int argc, char* argv[], char*envp[])
//{
//	int i = 0;
//	while (envp[i] != NULL)
//	{
//		printf("%s\n", envp[i]);
//		i++;
//	}
//	return 0;
//}

//int main(int argc, char* argv[], char*envp[])
//{
//	int i = 0;
//	while (argv[i] != NULL)
//	{
//		printf("%s\n", argv[i]);
//		i++;
//	}
//	/*for (i = 0; i < argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}*/
//	getchar();
//	return 0;
//}

//main函数是有参数的
//参数是什么呢？