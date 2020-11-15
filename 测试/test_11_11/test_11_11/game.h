#ifndef _GAME_H_
#define _GAME_H_
#include<stdio.h>      //include,不是define
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<time.h>

#pragma warning(disable:4996)

void Menu();

void Login();
#define Name "tom"         //字符串，记得加""
#define PassWord "1234"

void Game();
#define ROW 3        //row ，行
#define COL 3        //column ，列
#define P_COLOR 'X'
#define C_COLOR '0'
#define NEXT 'N'
#define DRAW 'D'

#endif