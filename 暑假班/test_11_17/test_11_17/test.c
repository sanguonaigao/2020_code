#define _CRT_SECURE_NO_WARNINGS 1

//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 0.1;
//	float d = 2.0;
//	//宏
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	//函数
//	max = Max(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}

//#define MALLOC(num, type)    (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//malloc(10*sizeof(int));
//	//Malloc(10, int);
//	int*p = MALLOC(10, int);
//
//	return 0;
//}

#include <stdio.h>

//
//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//
//	return 0;
//}

//#define __PRINT__
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __PRINT__
//		printf("%d\n", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if 1==2
//		printf("%d\n", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//
//int main()
//{
//#if 0
//	printf("1\n");
//#elif 2==2
//	printf("2\n");
//#else
//	printf("hehe\n");
//#endif
//
//	return 0;
//}


//#define ZHANGSAN 0
//int main()
//{
//#if defined(ZHANGSAN)
//	printf("张三\n");
//#endif
//
//#if !defined(ZHANGSAN)
//	printf("张三\n");
//#endif
//
//#ifdef ZHANGSAN
//	printf("zhangsan\n");
//#endif
//
//#ifndef ZHANGSAN
//	printf("zhangsan\n");
//#endif
//
//	return 0;
//}
//


//#include "test.h"

//offsetof

//size_t offsetof(structName, memberName);
//
//#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//	double d;
//};
//
//#define OFFSETOF(sn, mn)   (size_t)&(((sn*)0)->mn)
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	printf("%d\n", OFFSETOF(struct S, d));
//
//	return 0;
//}
//


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int pos = 0;
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//计算ret的哪一位为1
	//000000000000000000000000000000011
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
			break;
	}
	pos = i;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
	}
	num2 = ret ^ num1;
	printf("%d %d\n", num1, num2);

	return 0;
}

int main()
{
	long num = 0;
	FILE *fp = NULL;
	if ((fp = fopen("fname.dat", "r")) == NULL)
	{
		printf("Can’t open the file! ");
		exit(0);
	}
	while (fgetc(fp) != EOF)
	{
		num++;
	}
	printf("num=%d\n", num);
	fclose(fp);
	return 0;
}

