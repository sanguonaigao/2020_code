#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
    printf("hehe\n");
	return 0;
}



//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//13
//
//	//printf("%d\n", strlen("bit"));
//	//strlen() 求字符串长度的一个函数
//	return 0;
//}F
//
//int main()
//{
//	/*int a = -1;
//	printf("%d\n", a);
//
//	unsigned int b = 10;
//	printf("%u\n", b);
//*/
//	int a = -1;
//	printf("%u\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	char ch = '0';//1个字节-8bit位
//	//printf("%d\n", sizeof(ch));
//	printf("%c %d\n", ch, ch);
//	ch = 'w';
//	printf("%c %d\n", ch, ch);
//
//	return 0;
//}

//
//int main()
//{
//	char ch = 255;//-128-127
//	printf("%d\n", ch);
//	return 0;
//}

//int main()
//{
//	/*float f1 = 3.14f;
//	double f2 = 3.14;
//	printf("%d\n", sizeof(f1));
//	printf("%d\n", sizeof(f2));*/
//	100;
//	200;
//	100l;
//	//int a = 100;
//	//long b = 100l;
//	float f = 3.14f;//double
//	return 0;
//}
//
//int main()
//{
//	//int a = -10;
//	//printf("%d\n", -a);
//	int a = 9;
//	int b = 2;
//	int c = a / b;// 除法得到的是商
//	c = a % b;//取模得到的余数
//	printf("%d\n", c);
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", a);//11
//
//	//int b = a++;//后置++，先使用，后++
//	//printf("a = %d b = %d\n", a, b);//11 10
//
//	//int b = ++a;//前置++，先++，后使用
//	//printf("a=%d b=%d\n", a, b);
//	
//	//int b = a--;//后置--,先使用，再--
//	//printf("a=%d b=%d\n", a, b);//9 10
//	
//	//int b = --a;//前置--，先--，后使用
//	//printf("a=%d b=%d\n", a, b);// 9 9
//
//	return 0;
//}

int main()
{
	//int a = 10;
	//int b = 2;
	////int c = a + b * 3;
	//int c = a + b + 3;
	/*float a = 3.1;
	double b = 3.2;
	int n = 10;
	double c = a + b;
	double d = n + c;*/

	char c = 'a';//97
	char c2 = c + 1;//98

	printf("%c\n", c);
	printf("%c\n", c2);

	return 0;
}