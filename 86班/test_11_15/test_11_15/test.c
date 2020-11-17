#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#include <stdio.h>

int main()
{
	int n = 0;
	int arr[10] = { 0 };
	//输入数据
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//去重
	for (i = 0; i<n; i++)
	{
		int j = 0;
		for (j = i + 1; j<n; j++)
		{
			//如果相等，要把后续元素往前移动
			if (arr[i] == arr[j])
			{
				int k = 0;
				for (k = j; k<n - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				n--;
				j--;
			}
		}

	}
	for (i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//ASCII 编码
//a 97 b98 c 99de
//@#$
//
//
//int main()
//{
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	printf("\a\a\a\a\a\a\a\a\a");
//	return 0;
//}
//早期的编译器上可以演示
//三字母词
//int main()
//{
//	printf("(are you ok\?\?)\n");
//	//(are you ok]
//	return 0;
//}
//int main()
//{
//	printf("%s\n", "c:\\test\\45\\test.c");
//	//\n
//	//\0
//	return 0;
//}


//int main()
//{
//	//字符数组
//	//char arr[] = "abcdef";
//	char arr1[] = { 'a', 'b', 'c', '\0'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//strlen - string length
//	printf("%d\n", strlen(arr2));//
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	return 0;
//}

//#define MAX 100
//
//enum Sex
//{
//	MALE=4,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//1. 字面常量
//	3.14;
//	100;
//	//2. const修饰的常变量
//	/*const int num = 0;
//	num = 20;
//	printf("num = %d\n", num);*/
//
//	/*int arr[10] = {1,2,3};
//	const int n = 10;
//	int arr2[n] = { 1, 2, 3 };*/
//
//	//3. #define 定义的标识符常量
//	/*int a = MAX;
//	printf("%d\n", a);
//	int arr[MAX] = { 0 };
//*/
//	//4. 枚举常量
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//作用域
//生命周期

//int b = 100;
//
//int main()
//{
//	//?
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	//?
//	return 0;
//}

//int a = 10;
//
//void test()
//{
//	printf("test::%d\n", a);
//}
//
//int main()
//{
//	printf("%d\n", a);//2
//	test();
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);//1
//	}
//	printf("%d\n", a);//???
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入2个数字:>");
//	scanf("%d %d", &num1, &num2);
//	//
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//全局变量
//int a = 100;
//
//int main()
//{
//	//局部变量
//	int a = 10;
//	//局部变量优先
//	printf("%d\n", a);//10 100
//	return 0;
//}

//int main()
//{
//	char ch = 'W';//向内存申请1个字节的空间，名字是ch
//	float weight = 55.9f;
//	short age = 0;
//	printf("%d\n", age);
//
//	return 0;
//}
//
//int main()
//{
//	//%d - 整形
//	//%c - 字符
//	//%s - 字符串
//	//%f - 浮点数
//	//%p
//	//%u ...
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//stdio.h
//标准输入输出头文件
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//scanf_s - VS
//	printf("a = %d\n", a);
//
//	return 0;
//}
//


//
//int main()
//{
//
//	return 0;
//}


//main-主函数-程序的入口
//有且仅有一个
//int main()
//{
//	//库函数-引头文件
//	//输出
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
//
//

//
//(fn)+CTRL + F5
//开始执行不调试
//

