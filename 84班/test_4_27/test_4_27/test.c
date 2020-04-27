#define _CRT_SECURE_NO_WARNINGS 1

//
//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	struct S arr[n];//50个struct S 类型的数据
//
//	//30 - 浪费
//	//60 - 不够
//
//	return 0;
//}

//C语言是可以创建变长数组 -C99中增加了

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
//
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	p = NULL;//
//
//	return 0;
//}

//
//int main()
//{
//	//malloc(10*sizeof(int))
//	int*p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//调整动态开辟内存空间的大小

//
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个自字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realloc使用的注意事项：
//	//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//	//3. 得用一个新的变量来接受realloc函数的返回值
//	//
//	int*ptr = realloc(p, INT_MAX);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}


int main()
{
	//1. 对NULL进行解引用操作
	//int *p = (int*)malloc(40);
	////万一malloc失败了，p就被赋值为NULL
	//*p = 0;//err

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;//err
	//}
	//free(p);
	//p = NULL;
	//2. 对动态开辟的内存的越界访问
	//int *p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	////
	//free(p);
	//p = NULL;


	int a = 10;
	int* p = &a;
	*p = 20;
	//3. 对非动态开辟内存的free
	free(p);
	p = NULL;

	return 0;
}