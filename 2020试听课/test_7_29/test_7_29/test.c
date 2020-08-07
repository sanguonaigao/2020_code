#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr[50];
	gets(arr);
	printf("%s\n", arr);
	return 0;
}

//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	char input[20] = {0};
//	//关机程序
//	//1.关机
//	//system()库函数 - 执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机!\n");
//	printf("请输入:>");
//	scanf("%s", input);//%s-字符串
//	if (strcmp(input, "我是猪") == 0)//两个字符串比较大小不能使用==  strcmp = string compare
//	{
//		system("shutdown -a");//取消关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//
//int main()
//{
//	//代码
//	//数组 - 存放的是一组数
//	//0^a = a
//	//b^b = 0
//	//1 2 1
//	//001
//	//001
//	//000 - 0
//	//010 - 2
//	//010 - 2
//
//
//	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 8 };
//	//查找单身狗
//	//异或的思想
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 9; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//代码还能不能再优化？
//int main()
//{
//	//代码
//	//数组 - 存放的是一组数
//	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 8};
//	//查找单身狗
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		//统计arr[i]出现的次数
//		int count = 0;//计数器
//		int j = 0;
//		//那arr[i]和数组arr中的每个元素比较，如果相同计数器+1
//		for (j = 0; j < 9; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗就是：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//
//
//int main()
//{
//	//写代码
//	//1. 交换2个整数变量的值
//	int a = 3;//创建整型变量，并复制3
//	int b = 5;//
//	//交换a和b的值
//	//printf - 打印的库函数 - 引入头文件
//	printf("a = %d b = %d\n", a, b);
//
//	//方法3 - ^ 异或操作符 - 按二进制位异或的操作符
//	//异或是怎么计算的？
//	//对应二进制位相同为0，相异为1
//	//a = 3
//	//b = 5
//	//011 - 3- 
//	//101 - 5- 
//	//110 - a   
//	//011 - 3- b
//	//101 - 5- a
//
//	a = a^b;//1
//	b = a^b;//2
//	a = a^b;//3
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	//写代码
//	//1. 交换2个整数变量的值
//	int a = 3;//创建整型变量，并复制3
//	int b = 5;//
//	//交换a和b的值
//	//printf - 打印的库函数 - 引入头文件
//	printf("a = %d b = %d\n", a, b);
//
//	//方法2 - 代码有没有问题呢？
//	//代码
//	//整型溢出的问题 - 如果a和b特别大
//	a = a + b;
//	b = a - b;//3
//	a = a - b;
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}


//int - 整型
//
//int main()
//{
//	//写代码
//	//1. 交换2个整数变量的值
//	int a = 3;//创建整型变量，并复制3
//	int b = 5;//
//	//交换a和b的值
//	int c = 0;//创建了一个临时的中间变量
//	//printf - 打印的库函数 - 引入头文件
//	printf("a = %d b = %d\n", a, b);
//	//方法1
//	c = a;//1
//	a = b;//2
//	b = c;//3
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}





