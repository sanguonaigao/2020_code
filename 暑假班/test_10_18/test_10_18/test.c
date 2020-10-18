#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>


//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	//动态内存开辟
//	/*malloc
//	free*/
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int * p = NULL;
//	int arr[10] = { 0 };
//	return 0;
//}
//
//题目内容：
//A.p = arr;//ok
//B.int(*ptr)[10] = &arr;
//C.p = &arr[0];
//D.p = &arr;

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//定义一个函数指针，指向的函数有两个int形参，并且返回一个函数指针，
//返回的指针指向一个有一个int形参且返回int的函数？
//下面哪个是正确的？（ ）
//
//题目内容：
//A.int(*(*F)(int, int))(int)
//B.int(*F)(int, int)
//C.int(*(*F)(int, int))
//D.*(*F)(int, int)(int)

//声明一个指向含有10个元素的数组的指针，
//其中每个元素是一个函数指针，该函数的返回值是int，参数是int*，
//正确的是（ ）
//
//题目内容：
//A.(int *p[10])(int*)
//B.int[10] * p(int *)
//C.int(*(*p)[10])(int *)
//D.int((int *)[10])* p



//题目名称：
//下面test函数设计正确的是：（ ）
//
//char* arr[5] = { "hello", "bit" };
//
//test(arr);
//
//题目内容：
//A.void test(char* arr);
//B.void test(char** arr);
//C.void test(char arr[5]);
//D.void test(char* arr[5]);


//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}




//下面代码中print_arr函数参数设计哪个是正确的？（ ）
//
//int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//print_arr(arr, 3, 5);
//
//题目内容：
//A.void print_arr(int arr[][], int row, int col);
//B.void print_arr(int* arr, int row, int col);
//C.void print_arr(int(*arr)[5], int row, int col);
//D.void print_arr(int(*arr)[3], int row, int col);
//



//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//旋转1个字符
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}

//逆序字符串
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr + len - 1);
//	reverse(arr, arr+len-1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//
//	printf("%s\n", arr);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//
//

//数组名表示数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，数组名表示整个数组，计算的是数组的总大小，单位是字节
//2. &数组名，数组名表示整个数组，&数组名 取出的是整个数组的地址
//除此之外，所有遇到的数组名都表示数组首元素的地址
//

int main()
{
	//一维数组
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4

	//字符数组
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//随机值

	char arr[] = "abcdef";

	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//5

	//char *p = "abcdef";

	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1   p[0] == *(p+0) == *p
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组
	int a[3][4] = { 0 };
	printf("%p\n", &a[0][0]);
	printf("%p\n", a[0] + 1);
	printf("%p\n", &a[0] + 1);



	printf("%d\n", sizeof(a));//12*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16


	return 0;
}