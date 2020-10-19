#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int a = 10;
//	sizeof(a);
//	sizeof(int);//4
//
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//程序的结果是什么？

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//


//struct S
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//
//	return 0;
//}
//
//


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//-4
//	//10000000000000000000000000000100
//	//11111111111111111111111111111011
//	//11111111111111111111111111111100 - 补码
//	//FFFFFFFC
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//

//#include <stdio.h>
//
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);//POINT		
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);//POINT
//	printf("%s\n", cpp[-1][-1] + 1);
//	
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello bit"; //[hello bit\0]
//	//char arr[] = { 'b', '\0', 't' };
//	size_t;//unsigned int
//	int len = strlen(arr);//string length
//	printf("len = %d\n", len);
//
//	return 0;
//}


//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcdef";
//	if (strlen(p1) - strlen(p2) > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//size_t my_strlen(const char* str)
//{
//	int count = 0;//计数器
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}


//my_strlen("abcdef");
//1+my_strlen("bcdef");
//1+1+my_strlen("cdef");
//...
//1+1+1+1+1+1+my_strlen("");
//1+1+1+1+1+1+0
//6
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//

int main()
{
	char arr1[20] = { 0 };
	//char arr2[] = "hello bit";
	//char* arr1 = "xxxxxxxxxxxxxxxxxx";

	char arr2[] = { 'b', 'i', 't' ,'\0'};

	strcpy(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}



















