#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1, 2, 3 };
//	int arr2[] = { 2, 3, 4 };
//	int arr3[] = { 3, 4, 5 };
//	int arr4[] = { 4, 5, 6 };
//	int* arr[4] = {arr1, arr2, arr3, arr4};//
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;
//
//
//struct B
//{
//	int a;
//	char c;
//	double d;
//};
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//	struct B s;
//} Stu;
//
//void print1(struct Stu s)
//{
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.id);
//	printf("%lf\n", s.s.d);
//}
//void print2(struct Stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	printf("%lf\n", ps->s.d);
//}
//
//int main()
//{
//	struct Stu s = { "ÕÅÈı", 20, "2020020301", {100, 'b', 3.14} };
//	print1(s);
//	print2(&s);
//
//
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//	//printf("%s\n", s.id);
//	//printf("%lf\n", s.s.d);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Add(a, b);
//	return 0;
//}

#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	test();
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;//¶Ïµã
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	//3
//	//1!+2!+3!=1+2+6=9
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
#include <string.h>

//void my_strcpy(char* dest, char*src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

#include <assert.h>
//
//
//char* my_strcpy(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//¶ÏÑÔ
//	assert(src != NULL);//¶ÏÑÔ
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxx";
//	char *p = "abcdef";
//	my_strcpy(arr1, p);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;
//	int n = 0;
//	const int *const p = &num;
//	*p = 0;
//	p = &n;
//	printf("num = %d\n", num);
//	return 0;
//}


int main()
{
	int a, q, n, sum;
	a = 1;
	q = 2;
	for (n = sum = 0; sum <= 100; n++)
	{
		sum += a;
		a *= q;
	}
	printf("%d\n", n);
	return 0;
}