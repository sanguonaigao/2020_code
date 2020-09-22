#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//
//	return 0;
//}
//
//void test2()
//{
//	printf("test2()\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//调试一下
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//n!
//	//1!+2!+3!=1+2+6=9
//
//	for (j = 1; j <= n; j++)//n=3
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//0-9 - 越界了
//	//死循环
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//运行结果是啥？为什么？
//	return 0;
//}
//

//strcpy - string copy - 字符串拷贝

//void my_strcpy(char*dest, char* src)//
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//拷贝字符串不包含'\0'
//	}
//	//
//	*dest = *src;//拷贝的'\0'
//}

//void my_strcpy(char*dest, char* src)//
//{
//	if ((dest == NULL) || (src == NULL))
//	{
//		return;
//	}
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//assert - 断言 - <assert.h>
//
//
//char* my_strcpy(char* dest, const char* src)//
//{
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
//	char arr1[] = "hello";
//	char arr2[20] = "XXXXXXXXXX";
//	char*p = NULL;
//
//	//函数的链式访问
//	printf("%s\n", my_strcpy(arr2, arr1));//hello
//
//	return 0;
//}

//
//int main()
//{
//	int num = 10;
//	int *p = &num;
//
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	//const 修饰指针的时候
//	//const放在*的左边，表示指针指向的内容（*p）不能通过指针(p)来改变，但是指针变量（p）本身是可以修改的
//	//const放在*的右边，表示指针指向的内容（*p）可以通过指针(p)来改变，但是指针变量（p）本身是不可以修改的
//
//	const int num = 10;
//	int n = 20;
//	int   *  p = &num;
//	
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}

//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}