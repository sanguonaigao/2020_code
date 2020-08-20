#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>


//辗转相除法
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	
	while (c=a%b)
	{
		a = b;
		b = c;
	}

	printf("最大公约数是:%d\n", b);
	return 0;
}

//暴力求解
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int min = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		min = b;
//	else
//		min = a;
//
//	for (i = min; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			break;
//		}
//	}
//	printf("最大公约数是:%d\n", i);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	//判断i是否为3的倍数
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 3 1
//	//调整
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);//5 5 5 ...
//	}
//	return 0;
//}


//
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}
//

//
//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };//数组大小指定一定是常量或者常量表达式//err
//	//const 常变量
//
//	return 0;
//}

//关机程序
//程序运行起来，就提示1分钟内关机，如果输入：我是猪，就取消关机!


//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		//比较两个字符串-strcmp
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}



//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	//比较两个字符串-strcmp
//	if (strcmp(input, "我是猪") == 0)
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
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}


//猜数字游戏
//1. 电脑随机生成一个数字
//2. 玩家猜数字
//
//void menu()
//{
//	printf("******************************\n");
//	printf("******      1. play     ******\n");
//	printf("******      0. exit     ******\n");
//	printf("******************************\n");
//}
//
////RAND_MAX = 32767 - rand函数返回的是一个0-32767之间的随机数
// 
//void game()
//{
//	//1. 生成随机数 1-100 之间的随机数
//	//C语言中有一个生成随机数的函数 - rand
//	//time函数
//	int guess = 0;
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
//	srand((unsigned int)time(NULL));//时刻发生变化的数字 - 电脑上的时间一直在变化 -
//	do
//	{
//		//1. 打印一个菜单
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//游戏的逻辑
//			game();//猜数字游戏的代码
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	//加入正确的密码是："123456"
//
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//判断密码的正确性 - 比较2个字符串的大小关系
//		//strcmp - 函数是用来比较字符串的大小关系的
//		//库函数-所需要的头文件是：string.h
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n

//
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//....
//welcome to bit!!!!!
//
//char arr[] = "bit";
//[b][i][t][\0]
// 0  1  2
//
//#include <windows.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//cls 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int n = 17;
//	
//	int left = 0;
//	int right = 9;
//
//	//根据左右下标计算出中间元素的下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>n)
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



//依次查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int n = 7;
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了:%d\n", i);
//			break;
//		}
//	}
//	if (i == 10)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

	

//计算 n的阶乘
//1*2*3*...*n


//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	//1+2+6 = 9
//	for (j = 1; j <= 3; j++)
//	{
//		//计算的是j的阶乘，ret应该是从1开始
//		ret *= j;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	//1+2+6 = 9
//	for (j = 1; j <= 3; j++)
//	{
//		//计算的是j的阶乘，ret应该是从1开始
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);//5
//
//	//while (i <= n)
//	//{
//	//	ret = ret*i;
//	//	i++;
//	//}
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}