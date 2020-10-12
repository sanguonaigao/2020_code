#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//
//char* my_strcpy(char*dest, const char*src)
//{
//	//printf("hehe\n");
//	//return NULL;
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//函数指针
//	//printf("%p\n", &my_strcpy);
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	char* (*pf)(char*, const char*) = &my_strcpy;
//	(*pf)(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}
//
//char* (*)(char*, const char*);

//   (*( void(*)() )0)();
//
//void test()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("%p\n", test);
//	(*test)();
//	(*(void(*)())005911E5)();
//	(*(void(*)())005911BB)();
//
//	
//	return 0;
//}



//函数声明
//void(* signal(int, void(*)(int) )  )(int);
//
//typedef void(*pf_t)(int);
//pf_t signal(int, pf_t);


//typedef unsigned int uint;

//signal是一个函数声明
//signal函数的第一个参数是int类型的
//signal函数的第二个参数是一个函数指针，该函数指针指向一个参数为int
//返回类型为void的函数
//signal函数的返回类型也是一个函数指针，该函数指针指向一个参数为int
//返回类型为void的函数
//

//typedef int* pi_t;
//#define PINT_T int*
//#define MAX 1000
//
//int main()
//{
//	int* p1, p2;
//	pi_t p3, p4;
//	PINT_T p5, p6;
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//	int* arr[4];//整形指针数组
//	//函数指针数组
//	//存放的是函数指针
//	//int (*pf1)(int, int) = Add;
//	//int (*pf2)(int, int) = Sub;
//
//	int(*pf[4])(int, int) = {Add, Sub};
//
//	return 0;
//}
//
void menu()
{
	printf("********************************\n");
	printf("****** 1. add    2. sub ********\n");
	printf("****** 3. mul    4. div ********\n");
	printf("******      0. exit     ********\n");
	printf("********************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul (int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;

	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("结果是：%d\n", ret);
}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}
	} while (input);

	return 0;
}


//
//
//void menu()
//{
//	printf("********************************\n");
//	printf("****** 1. add    2. sub ********\n");
//	printf("****** 3. mul    4. div ********\n");
//	printf("******      0. exit     ********\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//转移表
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div};
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("结果是: %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}
//
//

//
//int main()
//{
//	//函数指针数组
//	//int* arr[10];//
//	//pa = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[5])(int, int);//函数指针数组-存放函数指针的数组
//	int(*(*ppfArr)[5])(int, int) = &pfArr;//ppfArr是指向【函数指针数组】的指针
//
//	return 0;
//}
//
//

