#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//struct S
//{
//	int num;//4
//	char arr[];
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));//?
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 6);
//	p->num = 100;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		p->arr[i] = 'a'+i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n", p->arr[i]);
//	}
//	//增加
//	struct S* ptr = realloc(p, 14);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c\n", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//struct S2
//{
//	int num;
//	char* arr;
//};
//
//int main()
//{
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2));
//	ps->num = 100;
//	ps->arr = (char*)malloc(6*sizeof(char));
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		ps->arr[i] = 'a' + i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//增容
//	char* ptr = realloc(ps->arr, 10);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	//
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//
//typedef struct{
//	int a;//0-3
//	char b;//4
//	//5
//	short c;//6-7
//	//8
//	short d;//8-9
//	//10-11
//}AA_t;
//
//struct A
//{
//	int a;//0-3
//	short b;//4-5
//	//6-7
//	int c;//8-11
//	char d;//12
//	//13-15
//};//16
//
//struct B
//{
//	int a;//0-3
//	short b;//4-5
//	char c;//6
//	//7
//	int d;//8-11
//};//12
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}
//
//
//#define A 2
//#define B 3
//
//#define MAX_SIZE A+B
//
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//1
//	unsigned char Para1 : 2;
//	unsigned char state;//1
//	unsigned char avail : 1;//1
//}*Env_Alarm_Record;
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct _Record_Struct) * MAX_SIZE);
//	return 0;
//}
//
//
//
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}
//

//
//#include <stdio.h>
//union Un
//{
//	short s[7];//14
//	int n;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	union
//	{
//		short k;//2
//		char i[2];//2
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//
//	return 0;
//}
//

//int  main()
//{
//	enum ENUM_A
//	{
//		X1,
//		Y1,
//		Z1 = 255,
//		A1,
//		B1,
//	};
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//
//	return 0;
//}

enum State
{
	VALID,
	INVALID
}state = VALID;

int my_atoi(const char* str)
{
	int flag = 0;
	state = INVALID;
	//空指针
	if (str == NULL)
		return 0;
	//空白字符的处理
	while (is_space(*str))
	{
		str++;
	}
	//+-
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	//
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str) == 0)
		{
			break;
		}
		else
		{
			ret = ret * 10 + flag*(*str - '0');

			str++;
		}
	}
	return ret;
}


int main()
{
	char*p = "    -123";
	int ret = my_atoi(p);
	printf("%d\n", ret);

	return 0;
}


