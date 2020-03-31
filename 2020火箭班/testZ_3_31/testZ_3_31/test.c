#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"
//
//int Test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;
//}
//
//int main()
//{
//	//int ret = Test();//嵌套调用
//
//	//printf("ret = %d\n", ret);
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i<= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}
//
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	printf("%d\n", Fun(2));
//	return 0;
//}
#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//
//	while (left<right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char* str)
//{
//	char tmp = str[0];//1
//	int len = my_strlen(str);
//	str[0] = str[len - 1];//2
//	str[len - 1] = '\0';//3
//	if (my_strlen(str+1) >=2)
//		reverse_string(str+1);//4
//	str[len - 1] = tmp;//5
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	//"tib olleh"
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n%10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include <math.h>
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n*Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double d = Pow(n, k);
//	printf("d = %lf\n", d);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));//16
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}


//
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	//0 1 2 3 4 5 6 7 8 9
//	Reverse(arr, sz);
//	Print(arr, sz);
//	//9 8 7 6 5 4 3 2 1 0
//	return 0;
//}
//
//
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print(arr1, sz);
//	Print(arr2, sz);
//
//	return 0;
//}
//


//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
//



//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}
//linux - gcc



//#include <stdio.h>
//int i;//全局没有初始化，默认是0
//      //局部变量不初始化，默认是随机值
//
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//
//
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

int main()
{
	char arr1[] = "abc";
	int arr2[10] = { 1, 3, 4, 5, 6, 7, 4, 3, 3, 3 };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", strlen(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr2));

	return 0;
}