#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void init_board(int arr[ROW][COL],int row, int col, char set);
void display_board(int arr[ROW][COL], int row ,int col);
void set_window(int arr[ROW][COL], int row, int col);
int judge(int arr[ROW][COL], int row, int col);
void set_player(int arr[ROW][COL], int row, int col);
int full_judge(int arr[ROW][COL], int row, int col);