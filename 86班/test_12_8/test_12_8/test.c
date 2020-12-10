#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//字符
//	}
//	*dest = *src;//\0
//
//	return ret;
//}
#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//if ((dest != NULL) || (src != NULL))
//	//{
//	//	return NULL;
//	//}
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;//字符
//	}
//
//	return ret;
//}
//
//int main()
//{
//	//字符串拷贝
//	//char arr1[20] = { 0 };
//	////char arr2[] = "abcdef";
//	//char*p = "abcdef";
//	////char*p = NULL;
//	////...
//
//	////my_strcpy(arr1, p);
//	////printf("%s\n", arr1);
//
//	//const int num = 10;
//	//const int * q = &num;//const int*
//	//*q = 20;
//
//	//printf("%d\n", num);
//
//	const char* p = "abcdef";
//	*p = 'w';
//
//	return 0;
//}
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;//计数器
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////size_t
//
//int main()
//{
//	const char* str = "abcdef";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("呵呵\n");
//	}
//	else
//	{
//		printf("哈哈\n");
//	}
//
//	return 0;
//}

//
//编译错误（语法错误）
//
//
//int main()
//{
//
//	return 0;
//}
//

//链接型错误
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = Add(3, 5);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//运行时错误


//
//
//int main()
//{
//	char;
//	signed char;
//	unsigned char;
//
//	short;
//	short int;
//	signed short int;
//
//	int;
//	signed int;
//	unsigned int;
//
//	return 0;
//}

//构造类型
//数组

//int main(void)
//{
//	char arr1[4];
//	char arr2[5];
//	void* p;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//
//	//00000000000000000000000000001010
//	//0x00 00 00 0a
//	//
//	int b = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//FFFFFFFF
//	return 0;
//}

//int main()
//{
//	//1-1
//	//1+(-1)
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010
//	//
//
//	//
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	//
//	return 0;
//}

//int check()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int check()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//
//int check()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	//int a = 0x11223344;
//
//	//int a = 1;
//	//char* p = (char*)&a;
//	//if (*p == 1)
//	//	printf("小端\n");
//	//else
//	//	printf("大端\n");
//
//
//
//	//int *pa = &a;//int*
//	//char*p = (char*)pa;
//
//	//00 00 00 01
//	//01 00 00 00
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//-1 -1 1
//	//
//
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//11111111111111111111111110000000-a
//	//
//	printf("%u\n", a);
//	return 0;
//}
//
//
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010
//	//-10
//	//
//	//-30
//	//-10
//	//10
//	//
//	return 0;
//}
//






