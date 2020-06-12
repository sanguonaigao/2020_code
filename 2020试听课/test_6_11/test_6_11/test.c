#define _CRT_SECURE_NO_WARNINGS 1

//stdio
//标准输入输出头文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
	int data;
	struct Node* next;
};
void pust_back(struct Node** ph, int d)
{
	//buy node
	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
	p->data = d;
	p->next = NULL;
	struct Node* t = *ph;
	if (*ph == NULL)
	{
		*ph = p;
	}
	else
	{
		//找到尾部
		while (t->next)
		{
			t = t->next;
		}
		t->next = p;
	}
}
void show_list(struct Node* h)
{
	while (h)
	{
		printf("%d-->", h->data);
		h = h->next;
	}
	printf("over\n");
}

void Destroy(struct Node** ph)
{
	if (*ph == NULL)
	{
		return;
	}
	else
	{
		struct Node* cur = *ph;
		while (cur)
		{
			struct Node* next = cur->next;
			free(cur);
			cur = next;
		}
		*ph = NULL;
	}
}
int main()
{
	int n = 0;
	int i = 0;
	struct Node* head = NULL;
	for (i = 0; i < 10; i++)
	{
		pust_back(&head, i);
	}
	show_list(head);
	Destroy(&head);
	show_list(head);

	return 0;
}

//int main()
//{
//	char input[20] = { 0 };//我是猪 - 字符串
//	//倒计时关机
//	//system() - 执行系统命令 - 库函数
//	system("shutdown -s -t 60");
//	//提示
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	printf(">>>>:");
//	scanf("%s", input);//接受输入的字符串
//	//判断
//	if (strcmp(input, "我是猪") == 0)//两个字符串判断相等用：strcmp() - string.h
//	{
//		//取消关机
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//
//int main()
//{ //1 2 3 4 5 1 2 3 4 6
//  //1 2 3 4 5 1 2 3 4 6 7
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2,5, 3, 4,11 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//
//	//2^3^2^3^5
//	//0^0^5
//	//5
//	//3^3 = 0
//	//0^5 = 5
//	//3^3^5
//	//0^5
//	//5
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	//sizeof(arr) - 计算的是数组的总大小，单位是字节 - 36
//	//sizeof(arr[0]) - 计算的是数组第一个元素的大小，单位字节 - 4
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		//统计下标为i的元素在数组中出现了几次
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("只出现一次的数字是：%d\n", arr[i]);
//			break;
//		}
//	}
//	
//	return 0;
//}

//主函数是程序的入口
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//int c = 0;//空瓶
//	printf("交换前：a = %d b = %d\n", a, b);
//	//3
//	//^ - 异或操作符
//	//按（2进制）位异或
//	//想同为0，相异为1
//
//	a = a^b;
//	//011
//	//101 - b
//	//110 - a
//	b = a^b;
//	//110 - a
//	//101
//	//011 - b
//	a = a^b;
//	//110
//	//011 - b
//	//101 - a
//
//	//2
//	//a = a + b;//a=8 b=5
//	//b = a - b;//a=8 b=3
//	//a = a - b;//a=5 b=3
//
//	//1
//	//c = a;//1
//	//a = b;//2
//	//b = c;//3
//	//
//	printf("交换后：a = %d b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//ctrl + F5
//Fn + ctrl + F5

