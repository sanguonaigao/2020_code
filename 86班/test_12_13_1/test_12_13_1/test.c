#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//	return 0;
//}
//

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//
//

#include <stdio.h>

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int n = 9;
//	//9
//	//00000000000000000000000000001001
//	//0 00000000 00000000000000000001001
//	//0.00000000000000000001001 * 2^-126
//	//
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//01000001000100000000000000000000
//	//
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//
//	return 0;
//}
//


//
//int main()
//{
//	float f = 5.5f;
//
//	//
//	//0 10000001 01100000000000000000000
//	//40 b0 00 00
//	//
//	//
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//
//	//
//	//
//	//3.14
//	//11.001010100101010101010000101001010100010101010010
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &i);
//	printf("%d\n", &arr[9]);
//
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	getchar();
//	return 0;
//}
//

//
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//
//	const char* p = "abcdef";
//*/
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = { 1, 2, 3, 4, 5 };
//	int arr3[5] = { 1, 2, 3, 4, 5 };
//	int arr4[5] = { 1, 2, 3, 4, 5 };
//
//	//int* arr[4] = {&a, &b, &c, &d};
//	int* arr[4] = { arr1, arr2, arr3, arr4 };
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 0;
//	//int*p = &a;
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6 };
//	//int *pa = arr;
//
//	int arr[10] = {1,2,3,4,5,6};
//	//int (*p)[10] = &arr;
//	int*p = &arr;//err
//
//	char ch[6];
//	char (*pc)[6] = &ch;
//
//	char* pch[6];
//	char* (*pp)[6] = &pch;
//
//	return 0;
//}


//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr); //int(*)[10]
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}

//数组指针通常不会应用到一维数组中
//
//int main()
//{
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int (*p)[10] = &arr;
//	//printf("%p\n", *p);
//	//printf("%d\n", sizeof(**p));
//	//
//	//p是一个数组指针,他的类型是int(*)[10]
//	//*p 得到个整个数组
//	//但是*p作为表达式或者表达式的一部分的时候，*p就是数组名,数组名表示首元素的地址
//	//*p的类型是int*
//	//
//	//printf("%p\n", &arr[0]);
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*p + i));
//	//}
//	//(*p)[i];//讲一下
//	//
//	//sizeof(*p);//40
//	//sizeof(p);//4
//
//	//int*p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	return 0;
//}
//
//void print1(int arr[3][4], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print(int (*p)[4], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6 };
//	print(arr, 3, 4);
//	return 0;
//}

//
//void set(char(*pc)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			*(*(pc + i) + j) = 'x';
//		}
//	}
//}
//
//int main()
//{
//	char arr[3][5];
//	set(arr, 3, 5);
//	return 0;
//}
//




