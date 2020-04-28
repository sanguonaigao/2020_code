#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//字符串
//	//一串字符，'\0' 是结束标志
//
//	return 0;
//}

#include <string.h>

//长度不受限制的字符串操作函数
//strcat
//strcpy
//strcmp - 字符串比较

//长度受限制的字符串操作函数
//strncat
//strncpy
//strncmp

//int main()
//{
//	char arr1[20] = "XXXXXXXXX";
//	//char arr2[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c'};
//
//	//strcpy(arr1, arr2);//string copy
//	strncpy(arr1, arr2, 3);
//
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abzdef";
//	char arr2[] = "abzdef";
//	//arr1 和 arr2数组
//	//在C语言中数组名是数组首元素的地址
//	//
//	//int ret = strcmp(arr1, arr2);
//	//printf("ret = %d\n", ret);
//	if (strcmp(arr1, arr2) > 0)
//	{
//		printf("arr1 == arr2\n");
//	}
//	return 0;
//}

//int main()
//{
//	//string length - 求字符串长度的一个函数
//	//char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };//.....
//
//	int len = strlen(arr2);//随机值
//
//	printf("%d\n", len);//?
//
//	return 0;
//}

//size_t ---> unsigned int
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcdef";
//
//	if (strlen(arr1) - strlen(arr2) > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "AbCd";
//	//_strlwr(arr);//字符串中的大小字母转换成小写
//	_strupr(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[1024] = { 0 };
//	gets(arr);//i am a student\0
//	int word = 0;//用来标识是否出现了一个单词，如果word是1，表示是单词，word是0，表示不是单词
//	int num = 0;//计数，计算字符串中单词的个数
//	int i = 0;
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			word = 0;
//		}
//		else if (word == 0)
//		{
//			word = 1;
//			num++;
//		}
//	}
//	//printf("%s\n", arr);
//	printf("num = %d\n", num);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[3][100] = {0};
//	int i = 0;
//	char max_string[100] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		gets(arr[i]);
//	}
//	//1. 让第一行和第二行比较找出较大的一行，存放在max_string
//	if (strcmp(arr[0], arr[1])>0)
//	{
//		strcpy(max_string, arr[0]);
//	}
//	else
//	{
//		strcpy(max_string, arr[1]);
//	}
//	//2. 让max_string 和第三行比较，找出较大的存放在max_string
//	if (strcmp(max_string, arr[2]) < 0)
//	{
//		strcpy(max_string, arr[2]);
//	}
//
//	printf("%s\n", max_string);
//
//	return 0;
//}

//题目名称：
//喝汽水问题
//题目内容：
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//
//	//total = money;
//	//empty =  money;
//	////置换
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2+empty%2;
//	//}
//
//	if (money > 0)
//		total = money * 2 - 1;
//	else
//		total = 0;
//
//	printf("total = %d\n", total);
//
//	return 0;
//}