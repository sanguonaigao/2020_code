#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>

#include <stddef.h>



//int main()
//{
//	//int ret = isspace('A');
//	//int ret = isdigit('A');
//	//printf("%d\n", ret);
//	printf("%c\n", toupper('A'));
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "I have an Apple";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//
//void* my_memcpy(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest+count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr3, arr3+2, 16);
//
//	//my_memcpy(arr2, arr1, 20);
//
//	return 0;
//}

//memset
//memcmp
//memcpy
//memmove
//
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[5] = { 1, 2, 3, 6 };
//	int ret = memcmp(arr1, arr2, 13);
//	memset(arr2, 0, 12);
//
//	printf("%d\n", ret);
//	return 0;
//}
//

//struct Book
//{
//	char name[20];
//	int price;
//}b1,b2;
//
//int main()
//{
//	struct Book b3;
//
//	return 0;
//}
//
//struct 
//{
//	char name[20];
//	int price;
//}b1;
//
//struct
//{
//	char name[20];
//	int price;
//}*p;
//
//int main()
//{
//	p = &b1;
//	return 0;
//}
//

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//
//
//int main()
//{
//	return 0;
//}



//struct S
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};

//offsetof()
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
////32 48
//int main()
//{
//	//struct S2 s;
//	//printf("%d\n", offsetof(struct S, c1));
//	//printf("%d\n", offsetof(struct S, i));
//	//printf("%d\n", offsetof(struct S, c2));
//
//	//printf("%d\n", sizeof(struct S));//
//	//printf("%d\n", sizeof(struct S2));//
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}


//修改默认对齐数
//struct S3
//{
//	char c;//0
//	//1-7
//	double d;//8 8 8-15
//	int i;//16-19
//	//20-23
//};
//
//
//#pragma pack(4)
//struct S3
//{
//	char c;//0
//	//1-3
//	double d;//8 4 4-11
//	int i;//12-15
//};
//
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//struct A
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int  main()
//{
//	//printf("%d\n", sizeof(struct A));//
//	struct A s = { 0 };
//	s.a = 10;//1010
//	s.b = 12;//1100
//	s.c = 3;//00011
//	s.d = 4;//0100
//
//	return 0;
//}
//
//enum Sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//enum Color
//{
//	RED=5,
//	GREEN,
//	BLUE
//};
//
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}
//
//
//#define MAX 100
//
//void menu()
//{
//	int a = MAX;
//	printf("***********************\n");
//	printf("**** 1.add    2.sub ***\n");
//	printf("**** 3.mul    4.div ***\n");
//	printf("****    0.exit      ***\n");
//	printf("***********************\n");
//}
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int  main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//
//			break;
//		case SUB:
//
//			break;
//		case MUL:
//
//			break;
//		case DIV:
//			break;
//		case EXIT:
//
//			break;
//		}
//	} while ();
//	return 0;
//}


union Un
{
	char c;//1
	int i;//4
};

int main()
{
	printf("%d\n", sizeof(union Un));//5 8
	union Un u = {0};
	printf("%p\n", &u);
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	return 0;
}