#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void play_game()
{
	int arr[ROW][COL];
	init_board(arr, ROW, COL, (char)'*');
	int start = 0;// full_judge(arr, ROW, COL);
	//if (start == 0)
	//	printf("初始化错误\n");
	//else
	{
		display_board(arr, ROW, COL);
		while (start)
		{
			int n = 0;
			set_window(arr, ROW, COL);
			n=judge(arr, ROW, COL);
			if (n == 0)
			{
				printf("电脑获胜\n");
				break;
			}
			else if (n == 1)
			{
				printf("玩家获胜");
				break;
			}
			display_board(arr, ROW, COL);
			set_player(arr, ROW, COL);
			n=judge(arr, ROW, COL);
			if (n == 0)
			{
				printf("电脑获胜\n");
				break;
			}
			else if (n == 1)
			{
				printf("玩家获胜");
				break;
			}
			display_board(arr, ROW, COL);
			start = full_judge(arr, ROW, COL);
			if (start == 0)
				printf("平局");
		}
	}	
}
void menu()
{
		printf("*************************\n");
		printf("****1  start,0  exit*****\n");
		printf("*************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			play_game();
			break;
		default:
			printf("输入错误，请重新输入:>");
		}
	} while (input);
}
int main()
{
	
	test();
	return 0;
}