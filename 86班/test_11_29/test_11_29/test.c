#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);
//	return 0;
//}
#include <stdio.h>
//
//int main()
//{
//	//char* p = "abcdef";
//	////%p- 打印地址
//	//printf("%c\n", *p);//'a'
//	//printf("%c\n", *(p + 1));//'b'
//	//printf("%c\n", *(p + 2));//'c'
//	//...
//
//	//printf("%p\n", p);
//	//printf("%p\n", p+1);
//	//printf("%p\n", p+2);
//	//printf("%p\n", p+3);
//
//	//printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen("abcdef"));//6
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//my_strlen("abcdef");
//1+my_strlen("bcdef");
//1+1+my_strlen("cdef");
//..
//1+1+1+1+1+1+0
//6
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}
//


//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
int count = 0;

//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//40 
//39     38
//38 37  37 36
//37 36 36 35  36 35 35 34
//....
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
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
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int arr[10];
//	//char ch[5];
//	//int n = 10;
//	//int arr2[n];
//
//	return 0;
//}

//int main()
//{
//	//int n;
//	//n++;
//	//printf("%d\n", n);
//	int arr1[10] = {1,2,3,4,5};
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//?
//	printf("%d\n", strlen(arr2));//3
//
//	printf("%s\n", arr1);//
//	printf("%s\n", arr2);//
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr[i];
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		arr[i] = 0;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;//数组首元素的地址-int
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", i[arr]);
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//arr[i]  === *(arr+i) == *(i+arr) = i[arr]
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p  <===> %p\n", i, &arr[i], p+i);
//	}
//*/
//	return 0;
//}