#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	//关机
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
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

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,7,5};
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("单身狗：%d\n", ret);
//	return 0;
//}


//3^3 = 0
//5^5=0
//a^a=0
//3^0=3
//5^0=5
//a^0=a
//3^5^3=5
//3^3^5=5
//交换律
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4};
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;//计数器
//		//统计一下arr[i]在arr数组中出现了几次
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
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("a=%d b=%d\n", a, b);
//	//方法3
//	//异或 - 按（二进制）位异或
//	//相同为0，相异为1
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}



//
//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("a=%d b=%d\n", a, b);
//	//方法2
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	//交换
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
//	//库函数
//	printf("hello world\n");
//	return 0;
//}
