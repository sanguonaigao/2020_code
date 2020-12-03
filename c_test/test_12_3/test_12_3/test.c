#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//printf("abc\ndef");
//	//C语言转义字符
//	//
//	printf("%d", strlen("c:\test\041\test.c"));
//	//   \t -- tab - 水平制表符
//	//   \041 -- \ddd  d是8进制数字
//	//   以33作为ASCII码值代表的字符
//	printf("%c\n", '\041');
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	//sizeof - 操作符 - 不是函数
//	//sizeof(int)
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(a));
//
//
//	//printf("The size of short is %d bytes.\n", sizeof(short));
//	//printf("The size of int is %d bytes.\n", sizeof(int));
//	//printf("The size of long is %d bytes.\n", sizeof(long));
//	//printf("The size of long long is %d bytes.\n", sizeof(long long));
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", 100);
//	//printf("%c\n", 100);
//	//printf("%s\n", "abcdef");
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%x\n", &a);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);//1234
//	//输出
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	//int ch = getchar();//a\n
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();//清理'\n'
//	}
//	return 0;
//}

//输入缓冲区的概念


int main()
{
	char password[20] = { 0 };
 	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认(Y/N):>");
	getchar();//处理缓冲区的\n

	int ch = getchar();//
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");

	return 0;
}

点击链接完成题目，并提交代码截图和提交通过的2张截图。