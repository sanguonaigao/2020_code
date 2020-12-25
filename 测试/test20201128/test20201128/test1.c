#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int arr[100];
		int i = 0;
		for (i = 0; i<n; i++)
		{
			arr[i] = i + 1;
		}
		for (i = 2; i < n; i++)
		{
			int j = 0;
			for (j = i + 1; j < n; j++)
			{
				if (arr[j] % i == 0)
					arr[j] = 0;
			}
		}
		int count = 0;
		for (i = 2; i < n; i++)
		{
			if (arr[i] != 0)
				printf("%d ", arr[i]);
			else
				count++;
		}
		printf("\n%d\n", count);
	}
	return 0;
}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int i = 2;
//	////printf("%d %d\n", ++i, --i);
//	//int ret = Add(++i, --i);
//	printf("%d\n", strlen("\012"));
//	printf("%d\n", strlen("\\012"));
//
//	return 0;
//}
//


//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	int n = 0;
//	struct Node* list = NULL;
//	struct Node* tail = NULL;
//	//输入结点
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//	{
//		int data = 0;
//		scanf("%d", &data);
//		struct Node *n = (struct Node*)malloc(sizeof(struct Node));
//		n->data = data;
//		n->next = NULL;
//
//		if (list == NULL)
//		{
//			list = n;
//			tail = list;
//		}
//		else
//		{
//			tail->next = n;
//			tail = tail->next;
//		}
//	}
//
//
//	//删除结点
//	int del = 0;
//	scanf("%d", &del);
//	struct Node *cur = list;
//	struct Node *prev = NULL;
//	while (cur)
//	{
//		//找到了
//		if (cur->data == del)
//		{
//			struct Node* pd = cur;
//			//第一个结点
//			if (cur == list)
//			{
//				list = list->next;
//				cur = list;
//			}
//			else
//			{
//				prev->next = cur->next;
//				cur = prev->next;
//			}
//			free(pd);
//		}
//		else//找不到
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//
//	return 0;
//}

