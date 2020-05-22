#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;//
//	//float f = 3.14f;//
//	int a = 10;//a是创建在内存上的
//	//a = 20;//直接访问
//
//	int * p = &a;//&- 取地址操作符
//	//存放地址的变量
//	//存放指针的变量 - 指针变量
//	//指针变量是用来存放地址的
//	float f = 3.14f;
//	float* pf = &f;
//
//	return 0;
//}
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%d\n", a);
//	*pa = 20;//解引用操作 - 间接访问操作符
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int a = 10, b = 20;
//	int *p1;
//	int *p2;
//	int *p1, *p2;//p1,p2都是指针
//	int *p1, p2;//p1是指针，p2是整形
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	printf("%d\n", sizeof(pa));
//	//int *pa = &a;
//	//0x0012ff40
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//对指针变量pa进行赋值
//	printf("%d\n", *pa);//引用指针变量指向的变量
//	printf("%x\n", pa);//
//	printf("%p\n", pa);//%p就是打印地址
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int*pa = &a;
//	int*pb = &b;
//	if (a < b)
//	{
//		int* p;//临时变量
//		p = pa;
//		pa = pb;
//		pb = p;
//	}
//	printf("%d %d\n", *pa, *pb);//大-->小
//	return 0;
//}

//交换2个整形变量

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;//tmp = a;
//	*pa = *pb;//a = b;
//	*pb = tmp;//b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d b = %d\n", a, b);
//	//交换
//	Swap2(&a, &b);
//
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//
//void Swap2(int* pa, int*pb)
//{
//	int*p;
//	p = pa;
//	pa = pb;
//	pb = p;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d b = %d\n", a, b);
//	//交换
//	Swap2(&a, &b);
//
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}


void Swap2(int* pa, int*pb)
{
	int tmp = 0;
	tmp = *pa;//tmp = a;
	*pa = *pb;//a = b;
	*pb = tmp;//b = tmp;
}

void Exchange(int* p1, int*p2, int* p3)
{
	if (*p1 < *p2)//a<b
	{
		Swap2(p1, p2);
	}
	if (*p1 < *p3)//a<c
	{
		Swap2(p1, p3);
	}
	if (*p2 < *p3)//b<c
	{
		Swap2(p2, p3);
	}
}

int main(){
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);

	Exchange(&a, &b, &c);

	printf("%d %d %d\n", a, b, c);//a中放最大值，c中放最小值
	return 0;
}