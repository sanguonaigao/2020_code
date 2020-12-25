#define _CRT_SECURE_NO_WARNINGS 1

//联合体（共用体）
#include <stdio.h>
//
//struct S
//{
//	char c;
//	int i;
//};
//
//union U
//{
//	char c;//1
//	int i; //4
//};
//
//int main()
//{
//	//struct S s;
//	union U u = {0};
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//		printf("%p\n", &(u.c));
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//返回1-小端
//	//返回0-大端
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//
//	return u.c;
//}
//
//int main()
//{
//	//大小端(字节序)
//	//int a = 0x11223344;//
//	//低地址                  高地址
//	//44 33 22 11 - 小端
//	//11 22 33 44 - 大端
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//union Un
//{
//	char c[5];//5
//	int i;//4
//};

//union Un
//{
//	short c[7];//14
//	int i;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}

#include <stdlib.h>

//动态内存开辟

//void test()
//{
//	//动态申请malloc
//	if (1)
//		return;
//	//释放-free
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//释放
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}


//int main()
//{
//	int *p = (int*)calloc(INT_MAX, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//扩容-调整
//	int*ptr = (int*)realloc(p, 80);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int *p = (int*)malloc(20);
//	//对NULL指针的解引用操作
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	//对动态开辟内存的越界访问
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	//释放非动态开辟的空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//
//	//释放动态内存开辟的一部分
//	free(p);//
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	
//	//对统一块动态开辟空间的多次释放-err
//	free(p);//
//	p = NULL;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	//使用
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	//不释放
//	getchar();
//	return 0;
//}


//int main()
//{
//
//	while (1)
//	{
//		malloc(1000);
//	}
//	return 0;
//}


void GetMemory(char **p)
{
	*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}


