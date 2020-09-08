#define _CRT_SECURE_NO_WARNINGS 1

//头文件包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//声明函数
//初始化棋盘的
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘的
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//检测游戏输赢
char CheckWin(char board[ROW][COL], int row, int col);