#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#include <stdio.h>
//
//int main()
//{
//	
//	printf("hehe\n");//库函数
//	return 0;
//}

//#include <stdio.h>
////<> - 引用C语言提供的标准库函数
////D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
////查找头文件的路径是：标准库函数所在的路径-编译器指定
//
//#include "add.h"
////"" - 引用自定义的函数
////"" 查找头文件的方式：
////首先在程序的当前的工作目录下查找,如果找不到，再去C语言编译器提供的标准库所在的目录下去查找
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	char c = 'w';
//	double d = 3.14;
//	//printf("%d %c\n", c, c);
//	//可变参数列表
//	printf("a=%d c=%c d=%lf\n", a, c, d);
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = -100;
//	//printf("%-7d%s\n", a, "hehe");//10     
//	//printf("%-7d\n", b);
//	char ch = 'a';
//	printf("%c\n", ch);
//	printf("%c\n", 377);
//	return 0;
//}
//
//int main()
//{
//	/*char arr[] = "abcdef";
//
//	printf("%s\n", "abcdef");
//	printf("%s\n", arr);*/
//	
//	//printf("%f\n", 1.0 / 3);
//	/*printf("%f\n", 3.14);
//	printf("%7.2f\n", 3.1415);
//	printf("%-7.2f\n", 3.1415);
//*/
//	//printf("%10.3e\n", 123.456);
//	printf("%o\n", 12);
//	printf("%x\n", 12);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	/*double d = 0.0;
//	scanf("%lf", &d);
//	printf("%lf\n", d);*/
//	char arr[20] = { 0 };
//	scanf("%s", arr);//arr是数组，数组名是数组首元素的地址
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("a=%d,b=%d,c=%d", &a, &b, &c);
//
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	scanf("%c%c%c", &a, &b, &c);
//	printf("%c %c %c\n", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	char c = 0;
//	float f = 0.0;
//	scanf("%d%c%f", &a, &c, &f);
//	printf("a=%d c=%c f=%f\n", a, c, f);
//
//	return 0;
//}
//
//int main()
//{
//	putchar('a');
//	putchar('b');
//	putchar('c');
//	putchar('\n');
//
//
//	return 0;
//}
//
//int main()
//{
//	int ch1 = getchar();
//	int ch2 = getchar();
//	int ch3 = getchar();
//
//	putchar(ch1);
//	putchar(ch2);
//	putchar(ch3);
//
//	return 0;
//}

int main()
{
	int ch = 0;
	ch = getchar();
	if (ch >= 'A' && ch < 'Z')
	{
		putchar(ch+32);
	}
	else
	{
		putchar(ch);
	}

	return 0;
}