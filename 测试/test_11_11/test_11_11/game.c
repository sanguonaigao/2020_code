#include"game.h"

void Menu()
{
	printf("#########################\n");
	printf("####1,Play     2,Exit####\n");
	printf("#########################\n");
	printf("Please Select# ");
}


static void ShowBoard(char board[ROW][COL], int row, int col)
{
	printf(" |1|2|3|\n");
	printf("--------\n");
	for (int i = 0; i < row; i++)
	{
		printf("%d|", i + 1);
		for (int j = 0; j < col; j++)
		{
			printf("%c|", board[i][j]);
		}
		printf("\n--------\n");
	}
}
static void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你的位置# ");
		scanf("%d %d", &x, &y);
		if (x<1 || x>3 || y<1 || y>3)
		{
			printf("你输入的坐标有误！\n");
			continue;
		}
		else if (board[x - 1][y - 1] != ' ')
		{
			printf("该位置已经被占用");
			continue;
		}
		else
		{
			board[x - 1][y - 1] = P_COLOR;
			break;
		}
	}
}
static char Judge(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && \
			board[i][1] == board[i][2] && \
			board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && \
			board[1][j] == board[2][j] && \
			board[0][j] != ' ');
		return board[0][j];
	}
	if (board[0][0] == board[1][1] && \
		board[1][1] == board[2][2] && \
		board[0][0] != ' ');
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && \
		board[1][1] == board[0][2] && \
		board[2][0] != ' ');
	{
		return board[2][0];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return NEXT;
			}
		}
	}
	return DRAW;
}
static void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = C_COLOR;
			break;
		}
	}
}
void Game()
{
	srand((unsigned long)time(NULL));
	char board[ROW][COL];
	memset(board, ' ', sizeof(board));
	char result = 'x';
	do
	{
		ShowBoard(board, ROW, COL);
		PlayerMove(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if (result != NEXT)
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		result = Judge(board, ROW, COL);
		if (result != NEXT)
		{
			break;
		}
	} while (1);
	if (P_COLOR == result)
	{
		printf("你赢了！\n");
	}
	else if (C_COLOR == result)
	{
		printf("你输了！\n");
	}
	else
	{
		printf("和棋！\n");
	}
	ShowBoard(board, ROW, COL);
}

void Login()
{
	int times = 3;
	char name[64] = { 0 };
	char password[64] = { 0 };
	while (times)
	{
		printf("请输入账号# ");
		scanf("%s", name);
		printf("请输入密码# ");
		scanf("%s", password);
		if (strcmp(name, Name) == 0 && strcmp(password, PassWord) == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			times--;
			printf("你还剩%d次机会\n",times);
			if (0 == times)
			{
				printf("需要%d秒后才能再次输入\n", 3);
				Sleep(3000);
				times = 3;
			}
		}
	}
}
