#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu(void)
{
	printf("*****************************\n");
	printf("***  1.add       2.del    ***\n");
	printf("***  3.search    4.modify ***\n");
	printf("***  5.sort      6.show   ***\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
}

void test(void)
{
	int input = 0;
	Contact con = {0};
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("\n请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_contact(&con);
			break;
		case DEL:
			//del_contact(&con);
			break;
		case SEARCH:
			//search_contact(&con);
			break;
		case MODIFY:
			//modify_contact(&con);
			break;
		case SORT:
			//sort_contact(&con);
			break;
		case SHOW:
			//show_contact(&con);
			break;
		case EXIT:
			destroy_contact(&con);
			//printf("通讯录已销毁。\n");
			printf("\n程序退出.\n");
			break;
		default:
			printf("\n菜单无该选项，请重新选择：>\n");
			break;
		}
	} while (input);
}
//
//int main(void)
//{
//	
//	//test();
//	1e-6;
//	return 0;
//}
#include<stdio.h>
#include <stdio.h>

#include <stdio.h>


int check(long long m)
{
	char arr[30] = { 0 };
	int i = 0;
	int n = 0;
	while (m)
	{
		arr[i++] = m % 10 + '0';
		m /= 10;
	}
	n = i;//数字位数
	int flag = 0;
	for (i = 0; i<n - 1; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			flag++;
		}
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int n = 0;
	while (scanf("%d", &n), n)
	{
		//找出合适的二段数
		long long i = n * 2;
		while (i)
		{
			if (check(i))
			{
				break;
			}
			i += n;
		}
		printf("%d: %lld\n", n, i);
	}
	system("pause");
	return 0;
}