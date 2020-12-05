#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("%4d\n", 15);
//	printf("%1d\n", 15);
//	printf("%d\n", 15);
//
//	return 0;
//}
//

#include <stdio.h>

//int main()
//{
//	int ret = printf("Hello world!");
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int main()
//{
//	int ret = printf("ab");
//	printf("%d\n", ret);
//	//ab2
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	//输入
//	int n = 0;
//	scanf("%c", &n);
//	//输出
//	int i = 0;
//	for (i = 0; i<5; i++)
//	{
//		//打印一行
//		//先打印空格
//		int j = 0;
//		for (j = 0; j<5 - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//再打印1
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", n);
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include <stdio.h>
//
//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i<sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	scanf("%4d%2d%2d", &y, &m, &d);
	printf("year=%d\n", y);
	printf("month=%02d\n", m);
	printf("date=%02d\n", d);

	return 0;
}

点击题目链接，做题

提交牛客网提交代码截图和提交通过的2张截图