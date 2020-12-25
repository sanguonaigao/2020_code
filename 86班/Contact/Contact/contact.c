#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pc->sz].addr);
		//
		pc->sz++;
		printf("增加成功\n");
	}
}


void ShowContact(const Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-15s\n", 
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-15s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindPeoByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//找不到
}


void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，不能删除\n");
	}
	else
	{
		//删除
		char name[MAX_NAME] = {0};
		//1. 查找
		printf("请输入要删除人的名字:>");
		scanf("%s", name);
		int pos = FindPeoByName(pc, name);
		if (-1 == pos)
		{
			printf("删除的人不存在\n");
		}
		else
		{
			//2. 删除
			int j = 0;
			for (j = pos; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功\n");
		}
	}
}


