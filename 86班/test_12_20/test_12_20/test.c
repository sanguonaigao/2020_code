#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//errno - 错误码存放的变量
int main()
{
	//fopen("test.txt", "r");
	////printf("%s\n", strerror(errno));

	////打印错误信息
	//perror("打开文件");
	fopen("t.c", "r");
	printf("%s\n", strerror(errno));
	perror("open");


	return 0;
}

//
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char buf[20] = { 0 };
//	strcpy(buf, arr);
//	char*sep = "@.";
//	char *ret = NULL;
//	for (ret = strtok(buf, sep); ret != NULL; ret=strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	//strtok;
//
//	//192.168.2.234
//
//	return 0;
//}
//
//KMP
//
//char* my_strstr(const char*str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* cp = str1;
//	if (*str2 == '\0')
//		return str1;
//
//	while (*cp)
//	{
//		char* s1 = cp;
//		char* s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char * arr1 = "abbbcdef";
//	char * arr2 = "bbc";
//	char*ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("找不到\n");
//	else
//		printf("%s\n", ret);
//
//	return 0;
//}
//

//
//int main()
//{
//	//abcdabcd
//	//cdab
//	char* arr1 = "abcdefghidef";
//	char* arr2 = "def";
//	char*ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//
//	}
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strncmp("abc", "abdef", 3));
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc";
//	strncat(arr1, arr1, 3);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc\0xxxxxxxxxxx";
//	char arr2[] = "def";
//	strncat(arr1, arr2, 2);
//
//	printf("%s\n", arr1);
//
//	return  0;
//}


//
//int main()
//{
//	//char arr[10] = "abc";
//	////scanf("%s", arr);
//	//printf("%s\n", arr);
//	//strcpy(arr, "qqqq");
//	char arr1[] = "xxxxxxxxxxxxx";
//	char arr2[] = "abc";
//	strncpy(arr1, arr2, 5);
//
//	printf("%s\n", arr1);
//
//	return  0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10 1
//	//10 5
//	//
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST 
//	printf("%s\n", cpp[-1][-1] + 1);//EW 
//	return 0;
//}
//


//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//

#include <string.h>
#include <assert.h>
//
//char* my_strcpy(char* dest, const char*src)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[10] = "xxxxxx";
//	//char *p = "hello world";
//	//char*p = "abc";
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};
//
//	my_strcpy(arr, arr2);
//
//	printf("%s\n", p);
//
//	return 0;
//}
//
//char* my_strcat(char*dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest);
//	assert(src);
//	//1. 找到目标中的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = "hello";
//	printf("%s\n", my_strcat(arr, "world"));
//
//	return 0;
//}


//
//int main()
//{
//	char arr[20] = "abc";
//	strcat(arr, arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", strcmp("abcd", "abcd"));
//	int n = strcmp("abc", "def");
//	if (n>0)
//		printf(">");
//	else if (n == 0)
//		printf("==");
//	else
//		printf("<");
//
//	//abc\0
//	//abcd\0
//
//	return 0;
//}
//
//
//





//int my_strcmp(const char* s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++; 
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int my_strcmp(const char* s1, const char*s2)
//{
//	assert(s1 && s2);
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
//	int ret = my_strcmp("abc", "bbcd");
//	printf("%d\n", ret);
//
//	return 0;
//}


