//#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
////声明函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%d\n", __STDC__);
//
//	//gcc clang
//
//	return 0;
//}


//int main()
//{
//	//打日志
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//		return;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", i);
//		fprintf(pf, "%s-%d-%s-%s:%d", 
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//定义的符号
//#define MAX 3+5
//#define reg register 
//
//#define print printf("hehe\n")
//
////定义宏
////#define Max() 
//
//int main()
//{
//	print;
//	reg b = 0;
//	int a = MAX;
//
//	return 0;
//}


//#define MAX 100
//
//int main()
//{
//	int a = 0;
//	if (1)
//		a = MAX;
//	else
//		a = 20;
//
//
//	//printf("%d\n", MAX);
//	return 0;
//}

//
//#define MAX(x, y) (x>y?x:y)
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = MAX(a+3, b);
//	//int ret = (a+3 > b ? a+3 : b);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//
//#define SQUARE(X) ((X)*(X))
//#define DOUBLE(X) ((X)+(X))
//
//#define M 100
//int main()
//{
//
//	int a = 5;
//	printf("hehe:M");
//	printf("%d\n", SQUARE(100+3));
//	printf("%d\n", 2*DOUBLE(a + 3));
//	//2*a+3+a+3
//	//10+3+5+3
//
//	//a+3*a+3
//	//5+15+3
//
//	return 0;
//}

//
//#define PRINT(x) printf("the value of "#x" is %d\n", x)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//printf("the value of a is %d\n", a);
//	//printf("the value of b is %d\n", b);
//	PRINT(a);
//	PRINT(b);
//
//
//	//printf("hello world\n");
//	//printf("hello ""world\n");
//
//	return 0;
//}

//#define CAT(X, Y) X##Y
//
//int main()
//{
//	int num86 = 2020;
//	printf("%d\n", num86);
//	printf("%d\n", CAT(num8, 6));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a + 1;
//	int b = ++a;//
//	return 0;
//}

//#define MAX(X, Y)  ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x>y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	int m = Max(a++, b++);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//#define MALLOC(n, type) \
//	(type*)malloc(n*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	p = MALLOC(10, int);
//
//	//(int*)malloc(10 * sizeof(int));
//	return 0;
//}

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

//
//int main()
//{
//	//打日志
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//		return;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", i);
//#if 1
//		fprintf(stdout, "%s-%d-%s-%s:%d", 
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//#endif 
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//#if 2>3
//	printf("hehe\n");
//#endif
//
//	return 0;
//}

//
//int main()
//{
//#if 2==3
//	printf("hehe\n");
//#elif 2==2
//	printf("haha\n");
//#elif 3==3
//	printf("heihei\n");
//#endif
//	return 0;
//}
//
//#define __debug__ 0
//
//int main()
//{
//#if !defined(__debug__)
//	printf("hehe\n");
//#endif 
//
//
//#if defined(__debug__)
//	printf("hehe\n");
//#endif 
//
//	return 0;
//}




//#define __debug__ 0
//
//int main()
//{
////#ifdef __debug__
////	printf("hehe\n");
////#endif 
//
//#ifndef __debug__
//	printf("hehe\n");
//#endif 
//
//	return 0;
//}


//#include "add.h"
////D:\2020_code\86班\test_12_30\test_12_30
////D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
//
//
//
//#include <stdio.h>
////D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
//


//
//#include <stdio.h>
//#include "add.h"
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//int main()
//{
//#error "hehe"
//
//	return 0;
//}

//#pragma warning(disable:4996)
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	return 0;
//}

//offsetof
#include <stddef.h>
//
//#define OFFSETOF(sname, mname)   (size_t)&(( (sname*)0 )->mname)
//
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}
//



//思维导图
