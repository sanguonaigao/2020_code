#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//
//1000个人的信息
//
//每个人的信息：名字+电话+年龄+性别+地址
//增加，删除，修改，查找，排序
//

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	CLS,
	SAVE
};
void menu()
{
	printf("*****************************\n");
	printf("*** 1. add      2. del   ****\n");
	printf("*** 3. search   4. modify ***\n");
	printf("*** 5. show     6. sort   ***\n");
	printf("*** 0. exit     7. cls    ***\n");
	printf("*** 8. save               ***\n"); 
	printf("*****************************\n");
}

void test()
{
	int input = 0;
	//创建的通讯录
	Contact* pc = NULL;//维护通讯录的指针
	InitContact(&pc);//初始化通讯录
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&pc);
			break;
		case DEL:
			DelContact(pc);
			break;
		case SHOW:
			ShowContact(pc);
			break;
		case EXIT:
			SaveContact(pc);
			DestoryContact(&pc);
			printf("退出通讯录\n");
			break;
		case SAVE:
			SaveContact(pc);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
