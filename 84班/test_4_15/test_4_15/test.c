#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;//整形提升
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100
//	//00101100 - c
//	//00000000000000000000000000101100
//	//
//	//00000000000000000000000011001000
//	//11001000-a
//	//00000000000000000000000001100100
//	//01100100-b
//
//	printf("%d %d", a + b, c);
//	//300 44
//
//	return 0;
//}
//

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char *)&a;
//	printf("%d\n", b);
//	return 0;
//}


//在32位大端模式处理器上变量b等于（ ）
//#include <string.h>
//
//int main()
//{
//	//-128 --> 127
//	char a[1000] = { 0 };
//	//
//	int i = 0;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 ... -128 127 126 125 ... 3 2 1 0 -1 -2 ... 
//	
//	printf("%d\n", strlen(a));//255
//
//	return 0;
//}
//
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// ................
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//第7题（编程题）
//题目名称：
//猜凶手
//题目内容：
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//以下为4个嫌疑犯的供词 :
//A说：不是我。//0
//B说：是C。   //0
//C说：是D。   //0
//D说：C在胡说 //1
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//
//	return 0;
//}
//
//
//找工作的时候会考
//
//赛马问题：有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名。
//请问最少比赛几次？
//
//赛马问题：有25匹马，5个跑道，没有计时器，请赛马确定，25匹马中的前三名。
//请问最少比赛几次？
//...
//
//烧香问题
//有一个种香，材质不均匀,但是每一根这样的香，燃烧完恰好是1个小时
//给你2跟香，帮我确定一个15分钟的时间段
//
//思维题-智力题
//

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) &&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) && 
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//#include <stdlib.h>
//
//
//int main()
//{
//	//申请空间
//	int *p = (int*)malloc(10*sizeof(int));
//	//使用空间
//	//****
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//
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

//
//int* fun(int a, int b);//函数声明
//int(*) fun(int a, int b);//err
//int(*fun)(int a, int b);//函数指针
//(int *)fun(int a, int n);//函数声明




//A.int(*    (*F)(int, int)    )(int)
//B.int(*F)(int, int)
//C.int(*(*F)(int, int))
//D.*(*F)(int, int)(int)

//(int * p[10])(int*)
//int[10] * p(int *)
//int(*(*p)[10])(int *)
//int((int *)[10])*p

//
//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	//5 4 3 2 1 
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}

//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//旋转字符串

//void left_move(char arr[], int k)
//{
//
//}

#include <string.h>
#include <assert.h>

//1.暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}

//2.三步翻转法
//abcdef
//bafedc
//cdefab

//逆序字符串的函数
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k<=len);

	reverse(arr, arr+k-1);//逆序左边
	reverse(arr+k, arr+len-1);//逆序右边
	reverse(arr, arr+len-1);//逆序整体
}
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde

//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	//
//	return 0;
//}

//abcdefabcdef

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 14);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
int main()
{
	char arr[] = { 'A', 'b', 'C' };
	printf("%s\n", strlwr(arr));
	return 0;
}