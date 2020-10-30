
//
//类型的声明+函数的声明
//

#include <stdio.h>
#include <string.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 100
#define MAX_QQ 12
#define MAX_SEX 5

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	short age;
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//数据
	int sz;//有效个数
}Contact;


//添加一个人的信息
void add_contact(Contact* pc);

//显示通讯录中的信息
void show_contact(Contact* pc);

//删除指定的联系人
void del_contact(Contact* pc);

//查找指定联系人
void search_contact(Contact* pc);

//修改指定联系人
void modify_contact(Contact* pc);

//排序通讯录的数据
void sort_contact(Contact* pc);

