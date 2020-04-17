#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 10)//0 1 2 3 4 5 6 7 8 9 10
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}

#include <stdio.h>
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

//i=123
//n = 0
//123/10 = 12 ->1 
//12/10  - 1  ->1
//1/10   - 0
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;//表示位数
//		//判断i是否为水仙花数，如果是，打印，如果不是，不打印
//		//1. 计算i的位数-n
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2. 计算i的每一位的n次方之和 - sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp%10, n);//pow(a,b)计算的是a的b次方
//			tmp /= 10;
//		}
//		//3. 比较sum 和 i
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
//小游戏-猜数字游戏
//

//电脑随机生成一个数字
//玩家来猜数字
//a. 猜大了，电脑告诉你，猜大了
//b. 猜小了，电脑告诉你，猜小了
//c. 猜对了，电脑告诉你，恭喜你，猜对了！

#include <stdlib.h>
#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("******   1. play     *******\n");
//	printf("******   0. exit     *******\n");
//	printf("****************************\n");
//}
//
////RAND_MAX == 32767
////%
////5%2 = 2 ... 1
////5/2 = 2 ... 1
//void game()
//{
//	//猜数字的过程
//	//1. 电脑随机生成一个数字(1-100)
//	//rand()
//	
//	int ret = rand()%100+1;//0-99 + 1 == 1-->100
//	int guess = 0;
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess>ret)
//		{
//			printf("猜大了\n");
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
//	//在整个工程中，srand被调用一次就可以了
//	srand((unsigned int)time(NULL));//设置随机数的生成起点
//
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//调用函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}
//

int main()
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	int n = 10;
	//....
	//标识符的名字：字母/数字/下划线组成，必须是字母/下划线开头
	int a[10];//数组的定义
	//int 2b[20];//err
	int b[5+5];

	return 0;
}