#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = a + b * 10;
//	int c = a + b + 10;
//
//	return 0;
//}

//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//
//	printf("ret = %d\n", ret);
//	printf("i = %d\n", i);
//	return 0;
//}

//
//int main()
//{
//	int a = 10;//开辟4个字节的内存空间
//
//	int* pa = &a;
//
//	char ch = 'a';
//	char* pc = &ch;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	//int*pa = &a;
//	//*pa = 0;
//	/*char* pc = &a;
//	*pc = 0;*/
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char* pc = (char*)arr;//int*
//	int i = 0;
//	//1
//	//00000000000000000000000000000001
//	//00 00 00 01
//	//01 00 00 00 02 00 00 00
//	for (i = 0; i < 40; i++)
//	{
//		printf("%d ", *pc);
//		pc++;
//	}
//	/*int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	return 0;
//}


//int main()
//{
//	//int*p;
//	//*p = 20;
//	int a[10] = { 0 };
//	int *p = a;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//a[i] = i;
//		*p = i;
//		p++;
//	}
//
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
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int *p = NULL;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 0 };
//	//40 36 
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}
//
//int my_strlen(char* s)
//{
//	char* start = s;
//
//	while (*s != '\0')
//		s++;
//
//	return (s - start);
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));//6
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *p);
//		//p++;
//		//printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//
//	}
//
//	return 0;
//}

//二级指针
//int main()
//{
//	//int* p = NULL;//1
//	//int *p = NULL;//2
//	//int *p1, *p2;
//
//	int a = 10;
//	int* pa = &a;
//
//	int** ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//
//	printf("%d\n", a);
//	//int*** pppa = &ppa;//三级指针
//
//	return 0;
//}

//
//int main()
//{
//	//int arr[10];//整形数组
//	//char arr2[5];//字符数组
//	//指针数组-存放指针的数组
//	int a = 0;
//	int b = 1;
//	int c = 2;
//
//	int* arr3[5] = {&a, &b, &c};//整形指针的数组
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr3[i]);
//	}
//
//	return 0;
//}


int main()
{
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 2, 3, 4 };
	int arr3[] = { 3, 4, 5 };
	int arr4[] = { 4, 5, 6 };

	int* arr[4] = {arr1, arr2, arr3, arr4};

}