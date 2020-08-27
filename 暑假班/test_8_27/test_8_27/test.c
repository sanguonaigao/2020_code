#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//递归实现n的k次方

double Pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return (double)n*Pow(n, k - 1);
	else
		return 1.0 /(Pow(n, -k));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}

//计算一个数的每位之和（递归实现）
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	//DigitSum(1234)
//	//DigitSum(123)+1234%10
//	//DigitSum(12) 123%10 + 1234%10
//	//DigitSum(1) + 12%10 + 123%10 + 1234%10
//	//1+2+3+4
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//abcdefg
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	//中间字符串的逆序
//	if (strlen(arr+1)>1)
//		reverse_string(arr+1);
//	arr[len - 1] = tmp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	//逆序-逆置-arr
//	//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		//打印一行-多少列
//		for (j = 1; j <= i; j++)
//		{
//			//打印一项
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//	return 0;
//}

//main是主调函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//
//	return 0;
//}
//int test()
//{
//	int a = 10;
//	int b = 20;
//	return b,a;//a,b  --- 逗号表达式
//}

//int x = 0;
//int y = 0;
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//
//int main()
//{
//
//	test();
//	printf("%d %d\n", x, y);
//	return 0;
//}


//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//
//int main()
//{
//	int arr[2] = {0};
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 4*2=8 4*3=12 4*4=16
//...
//9*1=9 9*2=18 ...


//int main()
//{
//	int i = 0;
//	//行数
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		//打印一行-多少列
//		for (j = 1; j <= i; j++)
//		{
//			//打印一项
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出这10个数字中最大值
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//     /  除法操作符   它的两边都是整数的时候，执行的是整除除法
//     1/2 != 0.5    == 0
//     /   两边操作数，只要有一个浮点数，执行的就是浮点数的除法

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}



//
//求第n个斐波那契数。（不考虑溢出）
//
//
//int Fib1(int m)
//{
//	if (m <= 2)
//		return 1;
//	else
//		return Fib(m - 1) + Fib(m - 2);
//}
//
//int Fib(int m)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (m>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		m--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}