#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}


//升序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void qsort(void *base, 
//			size_t sz, 
//			size_t width, 
//			int( *cmp)(const void *e1, const void *e2)
//);
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////升序
//void bubble_sort(
//				void* arr, 
//				size_t sz, 
//				size_t width, 
//				int(*cmp)(const void*e1, const void*e2)
//				)
//{
//	size_t i = 0;
//	//趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr+j*width, (char*)arr+(j+1)*width)>0)
//			{
//				Swap((char*)arr + j*width, (char*)arr + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	//整形排序的
//	int arr[10] = { 3, 1, 5, 2, 4, 9, 8, 7, 6, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz, 4, cmp_int);
//	print(arr, sz);
//}
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2()
//{
//	//测试结构体的排序
//	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 12} };
//	//bubble_sort(s, 3, sizeof(struct Stu), cmp_stu_by_name);
//	bubble_sort(s, 3, sizeof(struct Stu), cmp_stu_by_age);
//}
//
//int main()
//{
//	test2();
//	return 0;
//}


//数组名是数组首元素的地址
//有2个例外：
//1. sizeof(arr) arr表示整个数组
//2. &arr, arr表示整个数组
//
//int main()
//{
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(a[1]));//4
//	//printf("%d\n", sizeof(&a));//4/8
//	//printf("%d\n", sizeof(*&a));//16
//	//printf("%d\n", sizeof(&a + 1));//4/8
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//
//	//字符数组
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//
//	//printf("%d\n", strlen(arr));//随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	////strlen(const char* str)
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//	//char arr[] = "abcdef";
//	////7
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p + 1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1 //p[0] = *(p+0)
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", a+1);//int(*p)[4] = a+1;
//	printf("%p\n", &a[0] + 1);
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4 a[0]+1 第一行第2个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(*(a + 1)));//16 *(a+1) == a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16 *a == *(a+0) == a[0]
//	printf("%d\n", sizeof(a[3]));//16
//
//	int i = 10;
//	short s = 3;
//	printf("%d\n", sizeof(s = i + 2));//2
//	printf("%d\n", s);//3
//
//	sizeof(int);//4
//	return 0;
//}
//

//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//
//	printf("%x\n", p + 0x1);//0x100014
//	printf("%x\n", (unsigned long)p + 0x1);//0x100001
//	printf("%x\n", (unsigned int*)p + 0x1);//0x100004
//
//
//	return 0;
//}
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	//0 0
//	//1 x
//	//04000000 x
//	//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);
//
//	return 0;
//}
//
//
