#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 5 % 2;
//
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//11111111111111111111111111111111
//	//
//	//右移：
//	//算术右移:右边丢弃，左边补原来数字的符号位
//	//逻辑右移：右边丢弃，左边补0
//
//	printf("b = %d\n", b);
//
//	//int a = -1;
//	//int b = a << 1;//
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//
//	//a
//	//整数二进制表示形式：原码、反码、补码
//	//正整数：原码、反码、补码相同
//	//00000000000000000000000000000001-原码
//	//00000000000000000000000000000001-反码
//	//00000000000000000000000000000001-补码
//	//
//	//int a = -1;
//	//10000000000000000000000000000001-原码-直接写出来的
//	//11111111111111111111111111111110-反码-原码的符号位不变， 其他位按位取反
//	//11111111111111111111111111111111-补码-反码+1
//
//
//	//11111111111111111111111111111110
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010
//	//
//	//计算机中存储的是补码
//	//
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -1;
//	//int c = a&b;//&-按二进制位与
//	//int c = a|b;//&-按二进制位或
//	int c = a ^ b;//&-按二进制位异或（相同为0，相异为1）
//
//	//00000000000000000000000000000011
//	//
//	//11111111111111111111111111111111
//	//11111111111111111111111111111100
//	//11111111111111111111111111111011
//	//10000000000000000000000000000100
//	//
//	printf("c = %d\n", c);
//	return 0;
//}


//int main()
//{
//	int n = -1;
//	//1
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = -1;
//	n = n >> 1;
//	n >>= 1;
//	n = n + 2;
//	n += 2;
//
//	//11111111111111111111111111111111
//	//00000000000000000000000000000001
//	return 0;
//}

//
//int main()
//{
//	int flag = 3;
//	int a = !flag;
//
//	a != flag;
//	a = !flag;
//
//	if (flag)
//	{
//		//
//	}
//
//	if (!flag)
//	{
//		//
//	}
//	return 0;
//}

//int  main()
//{
//	int a = 10;
//	int* p = &a;//& 取地址操作
//	*p = 20;//* 解引用操作符
//
//	*&a = 20;
//	//double d = 0.0;
//	//int arr[10] = { 0 };
//	//printf("%p\n", &a);
//	//printf("%p\n", &d);
//	//printf("%p\n", &arr);
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int arr[10] = { 0 };
//
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof(a));
//
//	/printf("%d\n", sizeof(int));
//
//	//printf("%d\n", sizeof(arr));//
//	//printf("%d\n", sizeof(int [10]));//
//
//	short s = 1;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 1));
//	printf("%d\n", s);
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = ~a;
//	//00000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010
//	//-2
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	//a++;
//	//++a;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，后使用
//	int b = a--;//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	//printf("%d\n", a++);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//01010
//	//10100
//	//11110
//	//
//	//00000
//	printf("%d\n", a&b);//0
//	printf("%d\n", a&&b);//1
//	printf("%d\n", a|b);//30
//	printf("%d\n", a || b);//1
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max	= (a > b) ? a : b;
//
//	int a = 0;
//	b = a > 5 ? 3 : -3;
//	return 0;
//}
//


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int arr[10] = { 1, 2, 3, 4, 5 };
//	//arr[5] = 6;
//
//	int c = Add(2, 3);//函数调用操作符
//
//	return 0;
//}

//结构体
//struct Book
//{
//	char name[20];
//	int price;
//};
//
//void print1(struct Book* pb)
//{
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//}
//
//void print2(struct Book b)
//{
//	printf("%s\n", b.name);
//	printf("%d\n", b.price);
//}
//
//int main()
//{
//	struct Book b1 = {"C语言程序设计", 30};
//	struct Book b2 = { "数据结构", 99 };
//
//	printf("%s\n", b2.name);
//	printf("%d\n", b2.price);
//
//	print1(&b2);//打印
//
//	print2(b2);
//	return 0;
//}
//
//
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010-c
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	printf("c = %d\n", c);//
//
//	return 0;
//}

//
////实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//gcc

//实例2
#include <stdio.h>

long long fam(int m)
{
	long long k = 1;
	long long i = 0;
	for (i = 1; i<m; i++)
	{
		k = k*10 + 1;
	}
	return k;
}

long long fbn(int n)
{
	long long k = 1;
	long long i = 0;
	for (i = 0; i<n; i++)
	{
		k *= 10;
	}
	return k;
}

int  main()
{
	long long k = 0;
	long long m = 0;//二位数的前半段位数
	long long n = 0;//二位数的后半段位数
	long long s = 0;//二位数前半段的每一位
	long long t = 0;//二位数后半段的每一位
	long long am = 1;
	long long bm = 1;
	long long q = 0;
	while (scanf("%lld", &k), k)
	{
		//计算能够整除n的最小二段数
		long long tmp = k;
		long long count = 1;
		long long ret = 0;//存储二段数
		//求n的位数
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}
		if (count == 1)
			count = 2;
		while (1)
		{
			int i = 0;
			for (i =1; i <= count; i++)
			{
				m = i;
				n = count - i;
				//求
				int s = 0;
				for (s = 1; s <= 9; s++)
				{
					for (t = 0; t <= 9; t++)
					{
						q++;
						if (t == s)
							continue;
						if ((ret = fam(m)*fbn(n)*s + fam(n)*t) % k == 0 && ret>k)
							goto print;
					}
				}
			}
			count++;
		}
	print:
		printf("%lld: %lld\n", k, ret);
		printf("m=%lld s=%lld n=%lld t=%lld\n", m, s, n, t);
	}
	
	return 0;
}