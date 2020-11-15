#define _CRT_SECURE_NO_WARNINGS 1

//gcc - linux
//centos - 虚拟机
#include <stdio.h>
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}
//

//#define reg register
//
//
//int main()
//{
//	register int num = 0;
//	reg int num2 = 0;
//
//	return 0;
//}

//#define CASE break;case
//
//int main()
//{
//	int num = 0;
//	switch (num)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	//国际乱码大赛
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	FILE*pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	for (i = 0; i<10; i++)
//	{
//		fprintf(pf, "file:%s line:%d date:%s time:%s: %d\n", __FILE__, __LINE__,
//			__DATE__, __TIME__, arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//#define PRINT_LOG printf("file:%s line:%d date:%s time:%s: %d\n", __FILE__, \
//					__LINE__,\
//					__DATE__,\
//					__TIME__)
//
//
//
//int main()
//{
//	PRINT_LOG;
//	return 0;
//}


//#define MAX 100;
//int main()
//{
//	//int a = 100;;
//	//printf("%d\n", a);
//	printf("%d\n", MAX);
//	return 0;
//}


//#define MAX 100;
//
//int main()
//{
//	int a = 5;
//	int b = 0;
//	if (a > 3)
//		b = MAX;
//	else
//		b = 10;
//
//	printf("b = %d\n", b);
//
//	return 0;
//}
//
//#define M 100
//
//#define MAX(X,Y)   (X>Y?X:Y)
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//#define SQUARE(X) (X)*(X)
//#define DOUBLE(X) ((X)+(X))
//
//
//int main()
//{
//	char*p = "MHEHEH";
//	//printf("%d\n", SQUARE(5));
//	//printf("%d\n", SQUARE(4+1));
//	printf("%d\n", 10*DOUBLE(M));
//
//
//	//int a = 10;
//	//int b = 20;
//	//int max = MAX(a, b);
//	//printf("max = %d\n", max);
//
//	//max = Max(a, b);
//	//printf("max = %d\n", max);
//
//	return 0;
//}
//
//#define PRINT(FORMAT, X) printf("the value of "#X" is "FORMAT"\n", X)
//
//int main()
//{
//	int a = 100;
//	int b = 100;
//	float f = 5.5f;
//	PRINT("%d", a);
//	PRINT("%d", b);
//	PRINT("%f", f);
//
//	//print(a);
//	//print(b);
//
//	//printf("the value of a is %d\n", a);
//	//printf("the value of b is %d\n", b);
//
//	//printf("hello world\n");
//	//printf("hello ""world\n");
//
//	return 0;
//}
//##
//#define CAT(X,Y) X##Y
////## 
////Class91
//
//
//int main()
//{
//	int Class91 = 2020;
//	printf("%d\n", CAT(Class, 91));
//	//2020
//	return 0;
//}

//
//inline函数
//

//int main()
//{
//	int a = 10;
//	int b = ++a;//1
//	int b = a + 1;//2
//	getchar();
//	scanf();
//	return 0;
//}


#define MAX(X,Y)   ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	int ret = MAX(a++, b++);
//	int ret = ((a++) > (b++) ? (a++) : (b++));
	printf("a = %d b=%d\n", a, b);
	printf("%d\n", ret);

	return 0;
}
