#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Node
//{
//	struct Point p;
//	struct Node* next;
//};
//
//
//int main()
//{
//	struct Point p = {3, 5};
//	printf("x=%d y=%d\n", p.x, p.y);
//
//	struct Node n = { {5, 9}, NULL };
//	printf("x=%d y=%d\n", n.p.x, n.p.y);
//
//	return 0;
//}
//
#include <stddef.h>

//struct S
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	//struct S s = {0};
//	//printf("%d\n", sizeof(s));
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//
//	return 0;
//}
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//	char c3;
//};
////8
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}
//

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;//0   1-7
//	struct S3 s3;//8-23
//	double d;//24-31
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
//struct S
//{
//	char c1;//0
//	//1-7
//	double d;//8-15
//	char c2;//16
//	//17-23
//};
//
//#pragma pack(1)
//struct S
//{
//	char c1;//0
//	//1-3
//	double d;//4-11
//	char c2;//12
//	//13-15
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//

//
//struct S
//{
//	char arr[1024];
//	int i;
//};
//
//void print1(struct S ss)
//{
//	printf("%s %d\n", ss.arr, ss.i);
//}
//
//void print2(const struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->i);
//}
//
//int main()
//{
//	struct S s = {"hello bit", 100};
//
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

//
//struct A
//{
//	int _a : 2;//4 - 32 
//	int _b : 5;// 25
//	int _c : 10;//15
//	int _d : 30;//4 -32
//};
//
////
////00
////01
////10
////11
////
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	//16 8 
//	return 0;
//}

//
//struct S
//{
//	char a : 3;//1
//	char b : 4;//
//	char c : 5;//1
//	char d : 4;//1
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}
//
//

//RGB

//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Color c = RED;
//	//enum Sex sex = SECRET;
//	printf("%d\n", RED);//0
//	printf("%d\n", GREEN);//1
//	printf("%d\n", BLUE);//2
//
//	return 0;
//}
//#define MAX 1000
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*****1. add   2. sub   *****\n");
//	printf("*****3. mul   4. div   *****\n");
//	printf("*****     0. exit      *****\n");
//	printf("****************************\n");
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
//int main()
//{
//	int input = 0;
//	int max = MAX;
//	do
//	{
//		menu();
//		printf("ÇëÑ¡Ôñ:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			break;
//		case DIV:
//			break;
//		case MUL:
//			break;
//		case SUB:
//			break;
//		case EXIT:
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//
//union Un
//{
//	char c[5];//1
//	int i;//4
//};
//
//union U
//{
//	short s[7];//14
//	int i;//4
//};
//
//int main()
//{
//	union Un u = {0};
//	printf("%d\n", sizeof(u));//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%d\n", sizeof(union U));
//	return 0;
//}
//


