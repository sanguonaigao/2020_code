#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};//存储数据
	//关机
	system("shutdown -s -t 60");
	//提示
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	
	return 0;
}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	//暴力求解
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//3^5^3 = 5 
//011
//101
//110
//011
//101
//3^3^5 = 5

//0^3=3
//0^5=5
//0^a=a
//000
//101
//101
//000
//011
//011

//3^3=0
//5^5=0
//a^a=0
//101
//101
//000
//011
//011
//000
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 5, 7, 4 };
//	//暴力求解
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//^ - 按（2进制）位异或
//	//
//	printf("a=%d b=%d\n", a, b);
//	//交换
//	a = a ^ b;
//	b = a ^ b;//
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("a=%d b=%d\n", a, b);
//	//交换
//	a = a + b;
//	b = a - b;//
//	a = a - b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = 0;
//	printf("a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//库函数-引头文件stdio.h
//	printf("hello world\n");
//	return 0;
//}

//void main()
//{
//
//}

//Ctrl+F5 