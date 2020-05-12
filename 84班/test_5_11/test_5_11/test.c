#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	return 0;
//}

//stdio.h
//D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
// /usr/include

//#define MAX 100

//预定义符号

#include <stdio.h>
//
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int  main()
//{
//	printf("%d\n", __STDC__);
//
//	return 0;
//}


//95% - VS
//99% - gcc

//#define MAX 100
//#define STR "hehe"
//
//#define reg register
//#define do_forever for(;;)
//
//int main()
//{
//	for (;;)
//		;
//
//	return 0;
//
//	//reg int a;
//	//register int a;
//	//int max = MAX;
//	//int max = 100;
//	//printf("%d\n", max);
//	//printf("%s\n", STR);
//}
//
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	//int ret = SQUARE(5);
//	////int ret = 5* 5;
//	//printf("ret = %d\n", ret);
//
//	int ret = SQUARE(5 + 1);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	printf("MAX = %d\n", MAX);
//	//int ret = 10* ((a)+(a));
//	//
//	printf("%d\n", ret);
//
//	return 0;
//}


//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//
//	return 0;
//}

//#define PRINT(X) printf("the value of " #X " is %d\n", X)
//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	//printf("hel" "lo " "world\n");
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the calue of ""b"" is %d\n", b);
//	return 0;
//}
//
//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", class84);
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);
//	//printf("%d\n", Class84);
//	return 0;
//}

