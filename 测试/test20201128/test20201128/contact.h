#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <search.h>
#include <stdlib.h>

//通讯录：包含20个人的信息
//名字+电话+地址+QQ+性别+年龄
//功能：增删查改排，退出程序

//#define MAX 20

#define DEFAULT_SIZE 2
#define INC 1

#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 100
#define MAX_QQ 15
#define MAX_SEX 5

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	short age;
}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;//用于记录通讯录中联系人的个数，便于增删和显示
//}Contact;

typedef struct Contact
{
	PeoInfo *data;
	int sz;//用于记录通讯录中联系人的个数，便于增删和显示
	int capacity;//记录通讯录的最大容量，便于增容
}Contact;

//函数声明

void InitContact(Contact *pc);//初始化通讯录
void add_contact(Contact* pc);//添加一个人的信息
void del_contact(Contact* pc);
void search_contact(const Contact* pc);
void modify_contact(Contact* pc);
void sort_contact(Contact* pc);
void show_contact(const Contact* pc);
void destroy_contact(Contact* pc);