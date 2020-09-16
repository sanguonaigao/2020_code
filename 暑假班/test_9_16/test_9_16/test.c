#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//char ch = 'w';//向内存申请1个字节的空还能，存放‘w’
//	//char * pc = &ch;
//
//	//printf("%p\n", &a);//取地址
//
//
//
//
//	//int a = 10;//向内存申请4个字节的空间，存放10这个数字
//	//int * pa = &a;//地址也是一个值，可以存储到pa变量中， - pa就是指针变量
//	//*pa = 20;//解引用操作符
//
//	//printf("%d\n", a);//
//
//	return 0;
//}

//指针类型的意义
//1. 指针进行解引用操作的时候，能一次性访问几个字节
//2. 指针进行+-整数的时候
//
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;//访问4个字节
//	
//	char* pc = &a;
//	*pc = 0;//访问1个字节
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pa + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pa + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int* pc = arr;
//
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n", *(pc + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int *p;//p就是野指针
//	//p是指针变量，局部变量，局部不主动初始化，默认是随机值
//	//
//	*p = 20;
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 0;
//		p++;
//	}
//
//	return 0;
//}

//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();//p就是一个野指针
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int*p = &a;//初始化
//
//	//p = NULL;
//	int a = 10;
//	int*p = &a;//p为NULL指针，没有指向合法空间
//	if (p != NULL)
//	{
//		*p = 200;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd' };
//
//	char* p = &arr[3];
//	
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c ", *p--);
//	}
//	/*int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c\n", *p++);
//	}
//*/
//
//	/*int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c\n", *(p + i));
//	}*/
//	return 0;
//}

//
//指针-指针  得到的是指针和指针之间的元素个数
//前提：两个指针指向同一块空间的
//
//
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[9] - &ch[0]);//err
//
//	//
//	return 0;
//}

#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str!='\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);//
//
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0; 
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <====> %p\n", p + i, &arr[i]);
//	}
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);//打印第一个元素的地址
//
//	return 0;
//}


//二级指针
//
//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;//
//	
//	int** ppa = &pa;//ppa就是二级指针
//	**ppa = 100;
//
//	printf("%d\n", **ppa);
//
//	//int** *pppa = &ppa;//pppa是三级指针
//
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[5] = {&a, &b, &c};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}