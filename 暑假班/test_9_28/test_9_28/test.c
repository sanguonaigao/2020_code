#define _CRT_SECURE_NO_WARNINGS 1

#include < stdio.h >
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 ,6,7,8,9,10};
//	int *p1 = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p1 + i));
//	}
//
//	/*int (*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int*p3;
//	//p3 + 1;//跳过4个字节
//	//char* p4;
//	//p4 + 1;//跳过1字节的
//
//	//arr;//首元素的地址
//	//&arr;//取出整个数组的地址
//	int*p1 = arr;
//	//p1 + 1;//跳过一个元素的-4个字节
//	//int *p3 = &arr;//int(*)[10]
//	printf("p1 = %p\n", p1);
//	printf("p1+1 = %p\n", p1+1);
//
//	int (*p2)[10] =  &arr;//int(*)[10]
//	//p2 + 1;//跳过一个数组的！
//	printf("p2 = %p\n", p2);
//	printf("p2+1 = %p\n", p2+1);
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr);
//
//	return 0;
//}

//数组指针-指针 - 指向数组的指针
//
//int main()
//{
//	//1
//	//char arr[5];
//	//char (*pa)[5] = &arr;
//	//2
//	char* ch[5];//
//	char* (*pc)[5] = &ch;
//
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	////int*p = arr;//数组名是首元素的地址
//	////数组指针 = 数组的地址
//	////&数组名拿到的是数组的地址
//
//	//int(* p)[10] = &arr;//p就是数组指针，该指针指向了一个数组，数组10个元素，每个元素的类型是int
//
//	return 0;
//}


//整形指针 - 指向整形的指针
//int a = 10;
//int*p = &a;
//char ch = 'w';
//char* p = &ch;
//字符指针 - 指向字符的指针




//指针数组

//int main()
//{
//	//char* p1 = "zhangsan";
//	//char* p2 = "lisi";
//	//char* p3 = "wangwu";
//
//	//char* arr[] = { p1, p2, p3 };
//	char*arr[] = { "zhangsan", "lisi", "wangwu" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr1[] = { 1, 2, 3 };//arr1 - int*
//	int arr2[] = { 2, 3, 4 };//arr2 - int*
//	int arr3[] = { 3, 4, 5 };//arr3 - int*
//
//	//指针数组的使用
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* arr[3] = {&a, &b, &c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%c\n", *pc);//'w'
//
//	char* p = "abcdef";//"abcdef" - 常量字符串
//	printf("%s\n", p);
//
//	char arr[10] = "abcdef";
//	char* p2 = arr;
//	*p2 = 'w';
//
//	return 0;
//	//char*
//	//int*
//	//float*
//	//double*
//	//short*
//	//结构体*
//}

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//《剑指offer》
//
//void move_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		//从左边找一个偶数
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找一个奇数
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//1 3 5 7 9 
//	//2 4 6 8 10
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//10
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	move_arr(arr, sz);
//	print_arr(arr, sz);
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);//20
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//
//	//total += money;//买的汽水
//	//empty = money;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;//换回来的汽水，喝掉了
//	//	empty = empty / 2 + empty%2;//盘点手里的空瓶
//	//}
//	
//	printf("total = %d\n", total);
//
//	return 0;
//}


//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 },
//								{ 9802, "wang", 19 },
//								{ 9803, "zhao", 18 }
//	};
//	fun(students + 1);
//	return 0;
//}



//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	//struct S a, *p = &a;
//	struct S a;
//	struct S* p = &a;
//
//	a.a = 99;
//	printf("%d\n",    );
//	return 0;
//}




//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;//stu是结构体变量名
//
//typedef struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;//结构体类型名
//
//int main()
//{
//	return 0;
//}




//
//     *
//    ***
//   *****
//  *******
// *********
//***********
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
//
//int main()
//{
//	//打印一个菱形
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//6
//	//上->line
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格，再打印*
//		int j = 0;
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下->line-1
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//打印空格，再打印*
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <(line - 1-i)*2-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}