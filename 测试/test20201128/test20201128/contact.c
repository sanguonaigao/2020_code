#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


void InitContact(Contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SIZE;
	int sz1 = sizeof(PeoInfo);
	int sz2 = DEFAULT_SIZE * sizeof(PeoInfo);
	pc->data = (PeoInfo*)malloc(DEFAULT_SIZE * sizeof(PeoInfo));

	if (pc->data == NULL)
	{
		perror("初始化通讯录(malloc)");
		return;
	}
}

void add_contact(Contact *pc)
{
	if((pc->sz) == pc->capacity)
	{
		/*printf("通讯录已满，无法添加。请删除部分联系人后再添加\n");*/
		printf("\n系统提示：容量不足，正在为您扩容。 -add \n");
		//增加容量
		PeoInfo *ptr=(PeoInfo*)realloc(pc->data, ((pc->capacity) + INC)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			ptr = NULL;
			(pc->capacity) += INC;
			printf("\n系统提示：增容成功 - add success\n\n");
		}
		else
		{
			perror("添加联系人(relloc)");
			return;
		}
	}
	printf("请输入名字：>");
	scanf("%s",pc->data[pc->sz].name);
	printf("请输入电话：>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址：>");
	scanf("%s", pc->data[pc->sz].addr);
	printf("请输入QQ：>");
	scanf("%s", pc->data[pc->sz].qq);
	printf("请输入性别：>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄：>");
	scanf("%hd", &(pc->data[pc->sz].age));
	(pc->sz)++;
	printf("添加成功。\n");
}

static int find_peo(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的名字：\n");
	scanf("%s", name);
	int i;
	for (i = 0; i < pc->sz;i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;//找到返回下标
		}
	}
	return -1;//找不到
}

//修改指定联系人
void modify_contact(Contact* pc)
{
	int ret = find_peo(pc);
	if (ret == -1)
	{
		printf("未找到此人，请检查名字是否输入错误或确认该联系人是否在通讯录中\n");
	}
	else
	{
		printf("请输入新的名字：>");
		scanf("%s", pc->data[ret].name);
		printf("请输入新的电话：>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入新的地址：>");
		scanf("%s", pc->data[ret].addr);
		printf("请输入新的QQ：>");
		scanf("%s", pc->data[ret].qq);
		printf("请输入新的性别：>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入新的年龄：>");
		scanf("%d", &(pc->data[ret].age));
		printf("修改成功。\n");
	}
}

//查找一个联系人
void search_contact(const Contact* pc)
{
	int ret = find_peo(pc);
	if (ret == -1)
	{
		printf("未找到此人，请检查名字是否输入错误或确认该联系人是否在通讯录中\n");
	}
	else
	{
		printf("%20s %5s %5s %15s %12s %50s\n",  "姓名", "性别", "年龄", "QQ", "电话", "地址");
		printf("%20s %5s %5d %15s %12s %50s\n",  pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].age,
			pc->data[ret].qq,
			pc->data[ret].tele,
			pc->data[ret].addr
		);
	}
}

//删除联系人
void del_contact(Contact* pc)
{
	if (pc->sz <= 0)
	{
		printf("通讯录为空，无法删除");
	}
	else
	{
		//查找
		int ret = find_peo(pc);
		if (ret == -1)
		{
			printf("未找到此人，请检查名字是否输入错误或确认该联系人是否在通讯录中\n");
		}
		//删除
		else
		{
			int j;
			for (j = ret; j < (pc->sz)-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			(pc->sz)--;
			printf("删除成功\n");
		}
		
	}
}



//按姓名排列
void sort_contact(Contact* pc)
{
	int i, j;
	int flag = 1;
	for (i = 0; (i < pc->sz - 1)&& flag; i++)
	{
		flag = 0;
		for (j = 0; j < pc->sz - 1 -  i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j+1];
				pc->data[j + 1] = tmp;
				flag = 1;
			}
		}
	}
}

//显示信息
void show_contact(const Contact* pc)
{
	int i;
	printf("%5s %20s %5s %5s %15s %12s %50s\n","序号","姓名","性别","年龄","QQ","电话","地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%5d %20s %5s %5d %15s %12s %50s\n", i + 1, pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].qq,
			pc->data[i].tele,
			pc->data[i].addr
			);
	}
	printf("\n");
}

void destroy_contact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}