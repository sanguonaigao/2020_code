#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//下标从0
//	int k = 17;//要找数字
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;//要找数字
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
//
//#include <windows.h>
//#include <string.h>
//
//int main()
//{
//	//
//	//welcome to bit!!!!!!!!
//	//######################
//	//w####################!
//	//we##################!!
//	//wel################!!!
//	//...
//	//welcome to bit!!!!!!!!
//	//
//	//char arr[] = "bit";
//	char arr1[] = "welcome to bit!!!!!!!!";
//	char arr2[] = "######################";
//
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数-单位是毫秒
//		system("cls");//执行系统命令-cls-清理屏幕信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
////如果你引入自己创建的头文件，那使用""
//#include "test.h"
//
////如果你引入库函数的头文件，那使用<>
//#include <stdio.h>
//


#include <string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//假设正确的密码是：“123456”
//		//判断
//		//两个字符串比较大小不能直接用==，而应该使用strcmp(),string compare
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("***   1. play     0. exit   ***\n");
//	printf("*******************************\n");
//}
//
////RAND_MAX-32676
////rand函数返回0-32767之间的随机整数
////time 函数
////返回一个时间戳
////时间戳指的是：计算机在调用time函数的这个时间和计算机的起始时间（1970.1.1 0:0:0）之间的一个差值，单位是秒
////
////time_t
//
//void game()
//{
//	int guess = 0;
//	//1. 电脑生成一个随机数
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//只要调用一次-不能频繁的调用
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		//
//	} while (input);
//	return 0;
//}


//int main()
//{
//again:
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

#include <stdlib.h>
//
//int main()
//{
//	//关机
//	//shutdown -s -t 60
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	printf("请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
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
//	//关机
//	//shutdown -s -t 60
//	char input[100] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		printf("请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");//取消关机
//			break;
//		}
//	}
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//
//int main()
//{
//	//1-100
//	//个位为9：9 19 29 39 49 59 69 79 89 99
//	//十位为9  90 91 92 93 94 95 96 97 98 99 
//	//20
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	//   /(除号)来说，两边的操作数都是整数，执行的是整数除法，只要有一个操作数是浮点数，执行的就是浮点数除法
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}


//求10 个整数中最大值
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//假设arr[0]是数组中最大的元素
//	max = arr[0];
//	//拿剩下的所有元素和max比较
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//

//在屏幕上输出9 * 9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//每次打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//

int main()
{
	int len = strlen("abc");
	printf("%d\n", len);

	return 0;
}


