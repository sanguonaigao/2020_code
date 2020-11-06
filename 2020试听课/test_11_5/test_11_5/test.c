#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

//8
//7     6
//6    5    5    4
//5     4    4    3     4   3    3  2
//4  3    3   2  3  2  2  1   3  2  2  1  2 1 1 0
//3221 2 1 10 21 10 10     21101010
//2110 10 10 10 10
//10
//int cnt = 0;
//int fib(int n){
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8);
//	
//	printf("%d", cnt);
//}

//
//int main()
//{
//	char input[20] = { 0 };//存放数据
//	system("shutdown -s -t 60");//执行系统命令的
//again:
//	printf("请注意，你的电脑在1分钟后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//3^3=0
//5^5=0
//a^a=0
//0^a=a
//3^3^5=5
//3^5^3=5
//异或是支持交换律的

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4,7,5};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("单身狗是：%d\n", ret);
//
//	return 0;
//}

//暴力求解
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,7,5};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		//统计arr[i]在arr数组中出现的次数
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗是：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	//输入
//	scanf("%d%d", &a, &b);//
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//^ 按二进制位异或
//	//相同为0，相异为1
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	//输入
//	scanf("%d%d", &a, &b);//
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}



//
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	//输入
//	scanf("%d%d", &a, &b);//
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
//
//int main()
//{
//	//printf-库函数
//	printf("hello world\n");
//	return 0;
//}
//
//





