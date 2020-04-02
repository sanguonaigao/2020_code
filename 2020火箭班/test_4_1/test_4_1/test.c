#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数返回参数二进制(补码)中 1 的个数。
#include <stdio.h>
//
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//


//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
//13&1  == 1
//00000000000000000000000000001100
//00000000000000000000000000000001
//00000000000000000000000000000000
//
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	//13
//	//00000000000000000000000000001101 - 32bit
//	//6 - 110
//	//3 - 11
//	//1 - 1
//	//0
//	int ret = NumberOf1(num);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//n = 13
//n = n&(n-1)
//1101 - n
//1100 - n-1
//1100 - n
//1011 - n-1
//1000 - n

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	//10
//	//00000000000000000000000000001010
//	//
//	int i = 0;
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//指针变量
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	int a = 10;
//	double d = 10.0;
//
//	char* pc = &ch;
//	int* pa = &a;
//	double* pd = &d;
//
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}
//指针类型是有意义的
//1. 指针类型决定了指针进行解引用操作的访问多大空间
//char* 指针，解引用操作符访问1个字节 int* 指针解引用访问4个字节 
//2. 指针类型决定了指针+1，跳过多少个字节(走一步，走多大距离)
//char* 指针+1，向后跳1个字节
//int* 指针+1，向后跳4个字节
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char*pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//pa 是int* 的指针，+1就是跳过1个整形（4个字节）的意思，实际上加了4
//
//	printf("%p\n", pc);//pc 是char* 的指针，+1就是跳过1个字符（1个字节）的意思，实际上加了1
//	printf("%p\n", pc+1);
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 
//		0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	int i = 0;
//	char* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	/*int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}*/
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 0;//局部变量-随机值
//	//printf("%d\n", a);
//	//a++;
//
//	int *p;//野指针
//	*p = 20;
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int *p = &a;//初始化
//	int* p2 = NULL;//不知道让p2指向哪里
//	//使用p访问了a
//	//...
//	p = NULL;
//	if (p != NULL)
//		*p = 0;
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[0] - &arr[9]);//地址-地址  --> 指针-指针
//	//指针-指针 的绝对值 是 计算的指针和指针之间元素的个数
//	//前提：两个指针指向同一块空间
//
//	return 0;
//}
#include <string.h>
//三种方法实现了strlen:1,计数器，2,递归,3,指针-指针
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	//[a][b][c][\0]
//	printf("%d\n", len);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//? - 数组指针类型
//	printf("%p\n", &arr+1);
//
//
//	//数组名是数组首元素的地址
//	//但是有两个例外：
//	//a. sizeof(数组名)，这里的数组名，表示整个数组，sizeof(数组名)计算的是整个数组的大小
//	//b. &数组名，这里的数组名，表示整个数组，&数组名 取出的是整个数组的地址
//	//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", i[arr]); 
//		printf("%d ", arr[i]); //arr[i] ==> *(arr+i)
//	}
//
//	//数组可以通过指针来访问
//	//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	//printf("%p ---- %p\n", p + i, &arr[i]);
//	//	*(p + i) = i+1;
//	//}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	//printf("%d ", *(p + i));  //*(arr+i)  arr[i]   p[i]
//	//	//printf("%d ", p[i]);//   i[p] ==  *(i+p) == *(p+i) == p[i]
//	//	printf("%d ", i[p]);  //arr[i]
//	//}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}

#include<stdlib.h>
#include<string.h>
#include<assert.h>
void reverse_string(char *string)
{
	assert(string);
	if (*string == '\0')
	{
		return;
	}
	else
	{
		int len = strlen(string);
		char tmp = string[0];
		string[0] = string[len - 1];
		string[len - 1] = '\0';
		reverse_string(string + 1);
		string[len - 1] = tmp;
	}
}
int main()
{
	char p[] = "abcde";
	reverse_string(p);
	printf("%s\n", p);
	system("pause");
	return 0;
}