#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#include <stdio.h>
int main()
{
	int i, j, n = 0;
	//首先定义二维数组计数符号i,j 还有杨辉三角行数的初始化
	int a[100][100] = { 0 };
	//二维数组大小可自定，但切记不可使其超过整形数组的大小
	while (n < 1 || n >100)
		//在输入的值不正确时自动初始化问题，重新输入
	{
		printf("请输入要打印的杨辉三角行数>:");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
		//每一行第一个为1，用第一个for循环的输入
	}
	for (i = 1; i < n; i++)//第一层循环i决定第几行
	{
		for (j = 1; j <= i; j++)//第二层循环借用i限制每行字符数目
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)//一个for循环逐行打印叫a的二维数组
	{
		for (j = 0; j <= i; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	return 0;
}


//
//void copy_string(char*from, char*to)
//{
//	while (*to++ = *from++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char a[] = "abcdef";
//	char b[20] = { 0 };
//	//函数指针变量的定义
//	void (*cp)(char*, char*) = copy_string;
//	copy_string(a, b);
//	(*cp)(a, b);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//函数指针pAdd,是指向Add函数
//	int (*pAdd)(int, int) = Add;//函数名就是函数的地址
//
//	int ret = (*pAdd)(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", Add);//%p-专门用来打印地址
//	int ret = (*Add)(1, 2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char *p = "%d %c\n";
//	int a = 100;
//	char c = 'w';
//	printf("%d %c\n", a, c);
//	printf(p, a, c);
//
//	return 0;
//}
//
//int main()
//{
//	//char arr[] = "abcdef";
//	//arr[2] = 'w';
//	//printf("%s\n", arr);
//	char*p = "abcdef";
//	//*(p + 2) = 'w';
//	//printf("%s\n", p);
//	printf("%c\n", *(p + 2));
//	printf("%c\n", p[2]);
//
//	return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	char*p;
//	p = "abcdef";
//
//	char arr[] = "abcdef";
//	char arr[];//err
//	arr = "abcdef";//err
//
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef";
//	char arr[] = "abcdef";
//
//	p = "hello world";
//	arr = "hello world";//err
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char a[] = "i am a student";
//	char b[20] = { 0 };
//	strcpy(b, a);
//	printf("%s\n", b);//i am a student
//	return 0;
//}

//void copy_string(char*from, char*to)
//{
//	while (*from != '\0')
//	{
//		*to++ = *from++;
//	}
//	//拷贝'\0'
//	*to = *from;
//}

//void copy_string(char*from, char*to)
//{
//	while (*to++ = *from++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char a[] = "i am a student";
//	char b[20] = { 0 };
//	copy_string(a, b);
//
//	printf("%s\n", b);//i am a student
//	return 0;
//}
//
//int main()
//{
//	char a[20] = "i am a student";
//	char b[20] = { 0 };
//	int i = 0;
//	char *pa = a;
//	char *pb = b;
//	while (*(pa + i) != '\0')
//	{
//		*(pb + i) = *(pa + i);
//		i++;
//	}
//	// '\0'的拷贝
//	*(pb + i) = *(pa + i);
//
//	//while (a[i] != '\0')
//	//{
//	//	b[i] = a[i];
//	//	i++;
//	//}
//	//b[i] = a[i];
//
//	//把a中内容拷贝到b中
//	//int i = 0;
//	//for (i = 0; a[i] != '\0'; i++)
//	//{
//	//	b[i] = a[i];
//	//}
//	//b[i] = a[i];
//
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return 0;
//}
//
//int main()
//{
//	char*str = "hello world";
//	printf("%s\n", str);
//
//	return 0;
//}

//int main()
//{
//	//printf("hello bit\n");
//	//1. 
//	char arr[] = "hello world";
//	printf("%c\n", arr[6]);//下标来引用的
//	printf("%s\n", arr);
//
//	return 0;
//}

//
//void print(int arr[3][4], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//}
//
//
//void print(int (*p)[4], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//	}
//}
//
//
//int main()
//{
//	//int *p1;
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	print(arr, 3, 4);//负责打印arr中的内容
//
//	//int(*p)[4] = arr;//第一行的地址-一维数组的地址（int [4]）
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", *(*(p + i) + j));
//	//	}
//	//}
//
//	return 0;
//}

//int main()
//{
//	//int *p1;
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int (*p)[4] = arr;//第一行的地址-一维数组的地址（int [4]）
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int*p = &arr[0][0];
//	//int*p = arr[0];//
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


