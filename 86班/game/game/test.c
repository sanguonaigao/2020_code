#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

//测试扫雷游戏的
void menu()
{
	printf("**************************\n");
	printf("*******   1. play   ******\n");
	printf("*******   0. exit   ******\n");
	printf("**************************\n");
}
void game()
{
	char mine[ROWS][COLS];//存放雷的信息
	char show[ROWS][COLS];//排查出的雷的信息
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//1. 布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//2. 排查雷
	FindMine(mine, show, ROW, COL);
}

void test()
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
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择!\n");
			break;
		}
		//...
	} while (input);
}

int main()
{
	test();
	return 0;
}