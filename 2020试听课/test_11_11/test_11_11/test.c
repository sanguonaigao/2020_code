#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////主函数-程序的入口
//int main()
//{
//	//库函数-
//	printf("hello world\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
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
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//^ - 按（2进制）位异或
//	//想同为0，相异为1
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//


//int main()
//{
//	int arr[] = { 8, 2, 3, 4, 5, 8, 2, 3, 4 ,7,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
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
//		if (1 == count)
//		{
//			printf("单身狗是：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//a^a=0
//0^a=a
//异或支持交换律

//3^3^5=5
//3^5^3=5
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,7,5};
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^arr[i];
//	}
//
//	printf("单身狗是：%d\n", ret);
//
//	return 0;
//}

#include <string.h>
#include <stdlib.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//指向系统命令
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消\n");
	scanf("%s", input);
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


