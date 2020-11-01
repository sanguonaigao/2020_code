#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a = 10;
//	char c = 'w';
//
//	char arr[200] = {0};
//	int arr2[5] = { 0 };
//
//	//动态内存开辟
//
//	return 0;
//}
//
//int main()
//{
//	//动态内存开辟
//	int* p = (int*)malloc(175*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 25; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 25; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//
//		//回收-释放内存
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}
//

//
//dev C++
//

//
//int main()
//{
//	//动态内存开辟
//	int* p = (int*)malloc(0);
//	
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	int*p = NULL;
//
//	//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	//int* p = calloc(10, sizeof(int));
//	int* p = malloc(10*sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//调整大小
//	int* ptr = (int*)realloc(p, 20*sizeof(int));
//	if (ptr == NULL)
//	{
//		perror("realloc");
//	}
//	else
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int *p = (int*)malloc(100);
//	//可能存在的对NULL指针的解引用操作
//	*p = 0;
//
//	return 0;
//}
//
//
//int main()
//{
//	int*p = malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//对动态开辟内存的越界访问
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//对非动态开辟内存的释放
//
//int main()
//{
//	int*p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malooc");
//		return 0;
//	}
//	int i = 0;
//	//释放动态开辟内存空间的一部分-err
//	for (i = 0; i < 5; i++)
//	{
//		*p = 1;
//		p++;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	int*p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malooc");
//		return 0;
//	}
//
//	//使用空间
//
//	//对同一块动态开辟的内存多次释放-err
//	free(p);
//	p = NULL;
//	//....
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//void test()
//{
//	int*p = (int*)malloc(12);
//	if (p == NULL)
//		return;
//	//使用空间
//	if (1)
//		return;
//
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	//
//	return 0;
//}
//
//void GetMemory(char ** p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}



//char* GetMemory(char * p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}


//int* f1()
//{
//	//返回栈空间地址的问题
//	int x = 10;
//	return &x;
//}
////函数调用约定
////函数栈帧
//int main()
//{
//	//Test();
//	int *p = f1();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}
//
//char *GetMemory(void)
//{
//	//返回栈空间地址的问题
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);//?
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//

//
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}




