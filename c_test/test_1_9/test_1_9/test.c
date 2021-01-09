#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");
//
//	return 0;
//}

#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};


int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int data = 0;
	//创建一个空链表
	struct Node* list = NULL;//指向链表第一个节点的
	struct Node* tail = NULL;//指向链表最后一个节点的

	//插入元素-尾部插入
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data);//1
		//动态申请一个结点-堆区
		struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
		pn->data = data;
		pn->next = NULL;
		//尾部插入
		if (list == NULL)//空
		{
			list = pn;
			tail = pn;
		}
		else
		{
			tail->next = pn;
			tail = tail->next;
		}
	}

	//删除指定元素
	int del = 0;
	scanf("%d", &del);
	struct Node* cur = list;
	struct Node* prev = NULL;

	while (cur)
	{
		if (cur->data == del)
		{
			//删除
			struct Node* pd = cur;
			if (cur == list)//第一个结点
			{
				list = cur->next;
				cur = list;
			}
			else//非第一个结点
			{
				prev->next = cur->next;
				cur = prev->next;
			}
			n--;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	printf("%d\n", n);

	//打印链表
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}

	//释放链表
	cur = list;
	while (cur)
	{
		struct Node* pd = cur;
		cur = cur->next;
		free(pd);
	}
	list = NULL;

	return 0;
}