#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	//这种写法是不严谨的-gcc
//	char* ps = "hello bit";//常量字符串
//
//	//严谨的写法
//	const char* ps2 = "hello bit";
//
//	char arr[] = "hello bit";
//	return 0;
//}

//
//指针数组 - 数组
//存放指针(地址)的数组
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	////arr就是指针数组
//	//int* arr[3] = { &a, &b, &c };//int*
//
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//
//	int* arr4[] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//
//数组指针-指针
//指向数组的指针
//
//int*p; p是一个指向整形的指针
//char* pc;//pc是一个指向字符的指针

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int arr[5] = { 1, 2, 3, 4, 5 };//5*4 = 20
//	int(* pa)[5] = &arr;//&arr拿到的是数组的地址
//
//	//pa就是一个数组指针，该指针指向一个数组，数组有5个元素，每个元素的类型是int
//	//数组的地址就放在数组指针里边去
//
//	return 0;
//}

//数组指针的使用
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//1
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//2
//	//int(*p)[10] = &arr;
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//
//	return 0;
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);//1 - 编译器自己也会把arr[i]转换成*(arr+i)
//		printf("%d ", *(arr + i));//2
//	}
//}

//int main()
//{
//	int arr2[] = { 1, 2, 3, 4, 5, 6 };
//	print(arr2, 6);
//	return 0;
//}
//
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////数组指针
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//
//void print3( int(*p)[3][5] )
//{
//
//}
//
////数组指针的使用，一遍常见于二维素组
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//
//	//写一个函数打印arr数组的内容
//	//print1(arr, 3, 5);//这里的arr也是数组名，表示的依然是首元素的地址
//	print2(arr, 3, 5);
//	print3(&arr);
//	return 0;
//}

//void test(int arr[][5])
//{
//
//}
//
//int main()
//{
//	int arr[][5] = { 1, 2, 3, 4, 5, 6 };
//	test(arr);
//	return 0;
//}

//
//void test1(int* p)
//{
//}
//
//void test2(char* p)
//{}
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char arr2[5];//
//	test2(arr2);
//
//	test2(&ch);
//	test2(pc);
//
//	int a = 10;
//	int* ptr = &a;
//	int arr[10];
//	test1(&a);//ok
//	test1(ptr);//ok
//	test1(arr);//ok
//
//	return 0;
//}
//
//void test(int** p)
//{}
//
//int main()
//{
//	int* p1;
//	int **ptr;
//	int* arr[5];//
//	test(ptr);
//	test(&p1);
//	test(arr);
//	
//	return 0;
//}


int my_strlen(const char* str)
{
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}



int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int (*p)[10] = &arr;//取出数组的地址 p就是数组指针

	//函数指针的问题
	//是一个指向函数的指针 - 存放函数的地址
	//int (*pf)(int, int) = &Add;
	int(* pf)(int, int) = Add;
	int sum = (*pf)(2, 3);
     	sum = pf(2, 3);

	printf("%d\n", sum);
	    //sum = Add(2, 3);
	printf("%d\n", sum);


	//int (*ps)(const char*) = &my_strlen;

	//printf("%p\n", &Add);
	//printf("%p\n", Add);
	//函数名是函数的地址
	//&函数名还是函数的地址

	return 0;
}