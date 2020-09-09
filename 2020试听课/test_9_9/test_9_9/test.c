#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	//关机
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	//string compare
	//strcmp
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//异或
//5^5
//101
//101
//000
//a^a
//0^a = a
//0^5=5
//000
//101
//101
//0^4=4
//000
//100
//100
//算法
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 5, 4, 7};
//	int i = 0;
//	int ret = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//11
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^arr[i];
//	}
//	printf("%d\n", ret);
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	//arr[i];
//	//	int count = 0;
//	//	int j = 0;
//	//	for (j = 0; j < sz; j++)
//	//	{
//	//		if (arr[i] == arr[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if (count == 1)
//	//	{
//	//		printf("%d\n", arr[i]);
//	//		break;
//	//	}
//	//}
//
//	return 0;
//}

//^ 异或
//按（2机制）位异或
//相同为0，相异为1
//
//01010101
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b= %d\n", a, b);
//	//a=3
//	//011
//	//b=5
//	//101
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b= %d\n", a, b);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b= %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b= %d\n", a, b);
//	return 0;
//}
//1+1=2
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	int c = 0;
//	printf("交换前：a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//main函数-主函数-程序的入口

//int main()
//{
//	//printf 是C语言提供的库函数
//	//stdio.h
//
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//
//	return 0;
//}

