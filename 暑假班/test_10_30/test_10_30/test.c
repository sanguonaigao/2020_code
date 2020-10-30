#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//union Un
//{
//	int i;//4  4
//	char c[5];//1*5 = 5
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}


//
//int a = 0x11223344;
//低                      高
//44 33 22 11
//11 22 33 44
//写一个代码，测试当前的机器是大端还是小端？


//int a = 1;
//低                      高
//01 00 00 00
//00 00 00 01
//

//int check_sys()
//{
//	int a = 1;//[01 00 00 00]
//	if (*(char*)&a == 1)//int*
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}

//int check_sys()
//{
//	int a = 1;//[01 00 00 00]
//	return *(char*)&a;
//}

//
//int check_sys()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	//返回0，表示大端
//	//返回1，表示小端
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//


//题目名称：
//杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);

//1 2 3
//2 3 4
//3 4 5

//1 2 3
//4 5 6
//7 8 9
//
//int find_num(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col-1;
//	while (x<row && y>=0)
//	{
//		if (arr[x][y] == k)
//		{
//			printf("%d %d\n", x, y);
//			return 1;
//		}
//		else if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int ret = find_num(arr, 3, 3, 7);
//	if (ret == 1)
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	return 0;
//}



int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;
	while (x<*px && y >= 0)
	{
		if (arr[x][y] == k)
		{
			*px = x;
			*py = y;
			return 1;
		}
		else if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
	}
	*px = -1;
	*py = -1;

	return 0;
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 3;
	int y = 3;
	int ret = find_num(arr, &x, &y, 7);
	if (ret == 1)
		printf("找到了，下标是：%d %d\n", x, y);
	else
		printf("找不到\n");
	return 0;
}