#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*******   1. play      *******\n");
	printf("*******   0. exit      *******\n");
	printf("******************************\n");
}

void game()
{
	//设计一下三子棋游戏
	//存储数据的
	char board[ROW][COL] = {0};//数组应该初始化为空格
	InitBoard(board, ROW, COL);//初始化棋盘 - 空格
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//分析以下发现：
	//在游戏玩的过程中
	//1. 玩家赢
	//2. 电脑赢
	//3. 平局了
	//4. 继续

	while (1)
	{
		PlayerMove(board, ROW, COL);
		//判断输赢
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		//判断输赢
		DisplayBoard(board, ROW, COL);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}




