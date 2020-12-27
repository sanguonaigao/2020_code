#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_ADDR 20
#define MAX_TELE 12

#define MAX 1000

//类型声明

//一个人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录-静态版本
//typedef struct Contact
//{
//	int sz;//记录当前通讯录中元素的个数
//	PeoInfo data[MAX];//存储空间
//}Contact, * pContact;//* 

//通讯录-动态版本
typedef struct Contact
{
	int sz;//记录当前通讯录中元素的个数
	int capacity;//记录的通讯录当前的最大容量
	PeoInfo data[];//存储空间
}Contact, *pContact;//* 

//函数的声明

//初始化通讯录
void InitContact(Contact** pc);

//增加一个人的信息
void AddContact(Contact** ppc);

//打印通讯录
void ShowContact(const Contact* pc);

void DelContact(Contact* pc);
//销毁通讯录
void DestoryContact(Contact** ppc);

//保存通讯录信息到文件
void SaveContact(Contact* pc);

//加载文件中的信息到通讯录
void LoadContact(Contact** ppc);