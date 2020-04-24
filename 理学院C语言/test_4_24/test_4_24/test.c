#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
////	int arr[3][4] = { { 1, 2 }, { 2, 3, 4}, {3,4,5,6} };
//
////	arr[1][2] = 1;
//
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9};
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int a[2][3] = {1,2,3,4,5,6};
//	int b[3][2] = { 0 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[j][i] = a[i][j];
//			//b[0][0] = a[0][0]
//			//b[1][0] = a[0][1]
//			//b[2][0] = a[0][2]
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int max = arr[0][0];//假设arr[0][0]是所有元素中最大的
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j]>max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//
//	printf("max = %d, 下标是：%d %d\n", max, x, y);
//
//	return 0;
//}


//int main()
//{
//	char ch1[5] = {'a', 'b', 'c', 'd', 'e'};
//	char ch2[] = { 'a', 'b', 'c', 'd' , 'e'};
//
//	return 0;
//}

//int main()
//{
//	char arr[] = {'b', 'a', 'q', 'e', 'r'};
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}

//字符串
//C语言没有字符串类型
//"abcdef"
//"a";
//"";//空字符串

//int main()
//{
//	//char arr[] = "i am a student";
//	//char arr2[] = {'i', ' ', 'a', 'm '};
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', '\0' ,'t'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//%s 是打印字符串的字符串-以字符串的形式进行打印
//
//	return 0;
//}
#include <string.h>
//
//int main()
//{
//	char arr[] = "ab\0def";//字符串
//	//a b c d e f \0
//	//如何求字符串长度
//	int len = strlen(arr);//string length
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//	int i = 0;
//	/*for (i = 0; i< 6; i++)
//	{
//		printf("%c", arr[i]);
//	}
//*/
//	printf("%s\n", arr);
//	return 0;
//}

//int  main()
//{
//	char arr[10];
//	scanf("%s", arr);
//	puts(arr);
//	printf("--------------------\n");
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };
//	//scanf("%s", arr);
//	//puts(arr);
//	gets(arr);//输入信息放在arr中
//	puts(arr);//输出arr中的信息
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "hello";//6
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	puts(arr1);//helloworld
//
//	return 0;
//}
