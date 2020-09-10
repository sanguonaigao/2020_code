#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char input[20] = {0};//存放数据
	system("shutdown -s -t 60");

again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//比较一下input里边放的是不是“我是猪”-两个字符串的比较不能用==，而是应该使用strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//3^3 = 0
//011
//011
//000
//4^4=0
//a^a=0
//0^3=3
//000
//011
//011
//0^5=5
//000
//101
//101
//0^a=a

//
//算法
//解决问题的方法就是算法
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 5, 3, 4, 7};
//	int i = 0;
//	int ret = 0;
//	//把数组中所有的元素异或在一起，得到结果就是只出现一次的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//11 - 121
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4};
//	int i = 0;
//	//暴力求解
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//个数
//		//arr[i]
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
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//scanf("%d%d", &a, &b);//10 20
//	//^ - 按（二进制）位异或
//	//相同为0，相异为1
//	//101
//	//110
//	//011
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}




//int main()
//{
//	//a int - 4字节 - 4*8bit = 32bit
//	//INT_MAX;//2147483647
//	int a = 0;
//	int b = 0;
//
//	scanf("%d%d", &a, &b);//10 20
//
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
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);//10 20
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	//交换
//	c = a;
//	a = b;
//	b = c;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//写C代码
//main函数-主函数-程序的入口
//
//int main()
//{
//	//打印函数-库函数-引头文件-stdio.h
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//	return 0;
//}