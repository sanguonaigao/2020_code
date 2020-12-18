#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 3
#define MAX_COL 3
//ROW横，COL竖
//1.创建棋盘并初始化
void init(char chessboard[MAX_ROW][MAX_COL])
{
	/*把数组中每个元素都设为空格*/
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			chessboard[row][col] = " ";
		}
	}
}
void printChessBoard(char chessboard[MAX_ROW][MAX_COL])
{
	/*把棋盘打印出来*/
	printf("---------------");
	for (int row = 0; row < MAX_ROW; row++)
	{
		printf("| %c |%c | %c | \n", chessboard[row][0],
			chessboard[row][1], chessboard[row][2]);
		printf("---------------");
	}
}
void game()
{
	//1.创建棋盘并初始化
	char chessboard[MAX_ROW][MAX_COL] = { 0 };
	init(chessboard);
	//2.打印棋盘
	printChessBoard(chessboard);
}

//3.玩家落子（通过玩家输入坐标的方式来落子）
//4.判断胜负
//5.电脑落子（随机落子）
//6.判断胜负
//7.程序回到第二部继续执行
int menu()
{
	printf("========\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("========\n");
	printf("请输入你的选择:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main()
{
	srand(time(0));
	/*此处通过简单的菜单和玩家交互开始一局游戏*/
	// 此循环不一定是死循环，没有break才是死循环
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0);
		{
			printf("goodbye!\n");
			break;
		}
		system("pause");
		return 0;
	}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	int n = 0;
//	struct Node* list = NULL;
//	struct Node* tail = NULL;
//	//输入结点
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		int data = 0;
//		scanf("%d", &data);
//		struct Node *n = (struct Node*)malloc(sizeof(struct Node));
//		n->data = data;
//		n->next = NULL;
//
//		if (list == NULL)
//		{
//			list = n;
//			tail = list;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//	}
//
//
//	//删除结点
//	int del = 0;
//	scanf("%d", &del);
//	struct Node *cur = list;
//	struct Node *prev = NULL;
//	while (cur)
//	{
//		//找到了
//		if (cur->data == del)
//		{
//			struct Node* pd = cur;
//			//第一个结点
//			if (cur == list)
//			{
//				list = list->next;
//				cur = list;
//			}
//			else
//			{
//				prev->next = cur->next;
//				cur = prev->next;
//			}
//			free(pd);
//		}
//		else//找不到
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//
//	return 0;
//}