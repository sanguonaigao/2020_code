#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//system()-执行系统命令
	char input[20] = { 0 };
	system("shutdown -s -t 60");

again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//接收输入的内容
	if (strcmp(input, "我是猪") == 0)//strcmp-比较2个字符串是否相等的
	{
		system("shutdown -a");
	}
	else
	{
		goto again ;
	}
	return 0;
}

//
//解决问题的方法就是算法
//

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 7, 5, 4 };
//	//1 1 2 2 3 3 4 4 5
//	//
//	//找出只出现一次的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//
//	//异或是支持交换律的
//	//1^3^1=3
//	//001
//	//011
//	//010
//	//001
//	//011
//	//1^1^3=3
//	//0^3=3
//	//0^3=3
//	//0^5=5
//	//0^a=a
//	//000
//	//101
//	//101
//	//5
//	//000
//	//011
//	//011
//	//3^3=0
//	//5^5=0
//	//a^a=0
//	//
//	//101
//	//101
//	//000
//	//011
//	//011
//	//000
//	return 0;
//}
//

//
//暴力求解
//这个算法还能不能优化？
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 5, 7, 4 };
//	//找出只出现一次的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]这个元素在arr数组中出现的次数
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
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	printf("a=%d b=%d\n", a, b);
//	//交换
//	//^ 按（2进制）位异或的操作符
//	//相同为0
//	//相异为1
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	//交换2个整形变量-不能使用临时变量
//	int a = 10;
//	//4个字节-*8bit = 32bit
//	//最大值
//	int b = 20;
//	//交换
//	printf("a=%d b=%d\n", a, b);
//	//你有没有觉得这个代码有问题？
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	//交换2个整形变量
//	int a = 10;
//	int b = 20;
//	//交换
//	int c = 0;
//	
//	printf("a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//stdio
//标准输入输出头文件

//int main()
//{
//	//printf-库函数-引用头文件-输出函数
//	printf("hello world\n");
//	return 0;
//}

//ctrl+F5- 运行代码