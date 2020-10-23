#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "my_strcat.h"




int main()
{
	char arr1[] = "zpw@bitedu.tech";
	char tmp[30] = { 0 };
	strcpy(tmp, arr1);
	char arr2[] = "@.";
	char* p = NULL;
	for (p=strtok(tmp, arr2); p != NULL; p=strtok(NULL, arr2))
	{
		printf("%s\n", p);
	}

	//char* p = strtok(tmp, arr2);
	//printf("%s\n", p);

	//p = strtok(NULL, arr2);
	//printf("%s\n", p);

	//p = strtok(NULL, arr2);
	//printf("%s\n", p);


	//"192.168.100.24" 点分十进制  "."
	//zpw@bitedu.tech   ".@"
	//279991991@qq.com
	//strtok


	return 0;
}


//strstr - my_strstr()
//{}
//KMP
//
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char*ret = strstr(arr, "cd");
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abqeee";
//	int ret = strncmp(arr1, arr2, 2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "ab";
//	if (strlen(arr1) != strlen(arr2))
//	{
//		printf("No\n");
//		return 0;
//	}
//	strncat(arr1, arr1, 6);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("No");
//	}
//	else
//	{
//		printf("Yes");
//	}
//
//	//abcdefabcdef
//	//
//	//abcdef
//	//bcdefa
//	//cdefab
//	//defabc
//	//efabcd
//	//fabcde
//
//	return 0;
//}

//判断一个字符串是不是另外一个字符串旋转得来的？
//abcdef
//cdefab
//cdefab
//
//void left_move(char* str, int n)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdqfab";
//	int i = 0;
//	int len = strlen(arr1);
//
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("YES\n");
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdef\0xxxxxxxxx";
//	char arr2[] = "qwer";
//	strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxx";
//	char arr2[] = "hel";
//	strncpy(arr1, arr2, 50);
//	printf("%s\n", arr1);
//
//	return 0;
//}




//函数调用约定
//abc\0
//abc\0
//
//int my_strcmp(const char*s1, const char* s2)
//{
//	assert(s1);
//	assert(s2);
//
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	//-1  0  1
//	int ret = my_strcmp("abcw", "abcdef");
//	//printf("%d\n", ret);
//	if (ret<0)
//	{
//		printf("小于\n");
//	}
//	else if (ret == 0)
//	{
//		printf("等于\n");
//	}
//	else if (ret>0)
//	{
//		printf("大于\n");
//	}
//	return 0;
//}

//导入静态库
//#pragma comment(lib, "my_strcat.lib")
//
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//	return 0;
//}

//
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//1. 找目的地空间的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 拷贝数据
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
//	char arr1[20] = "hello ";
//	//my_strcat(arr1, "world");
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcat(arr1, "world"));
//	return 0;
//}

//Null - '\0'
//NUL - '\0'

//
//char* my_strcpy(char* dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char* str1 = "abcdef";
//	char arr[20] ="XXXXXXXXXXXXX";
//
//	//my_strcpy(arr, str1);
//	//printf("%s\n", arr);
//	printf("%s\n", my_strcpy(arr, str1));
//	return 0;
//}