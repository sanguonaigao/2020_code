#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<math.h>
int Sad(int i)
{
	int k = 0;
	int sum = 0;
	int j = 0;
	for (k = 0; k < 5; k++)
	{
		j += i * pow(10, k);
		sum += j;
	}
	return sum;
}
int main()
{
	int a = 0;
	int c = 0;
	printf("请输入a值：\n");
	scanf("%d", &a);
	c = Sad(a);
	printf("Sn=%d", c);
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int number;//密码
//	int id;//编号
//	struct Node* next;
//};
//
//void init(struct Node** L)
//{
//	(*L) = (struct Node*)malloc(sizeof(struct Node));
//	(*L)->next = (*L);
//}
//void create(struct Node**L, int num)
//{
//	int i = 0, n = 0;
//	struct Node* p, *temp;
//	p = (*L);
//	for (i = 1; i <= num; i++)
//	{
//		temp = (struct Node*)malloc(sizeof(struct Node));
//		scanf("%d", &n);
//		temp->number = n;
//		temp->id = i;
//		p->next = temp;
//		p = temp;
//	}
//	p->next = *L;
//}
//void print(struct Node*L)
//{
//	struct Node* p;
//	p = L->next;
//	while (p != L)
//	{
//		printf(" %d   密码%d\n ", p->id, p->number);
//		p = p->next;
//	}
//}
//void joseph(int m, int n, struct Node**L)//m为人数，n为起始密码数
//{
//	struct Node* p = (*L);
//	struct Node* deltemp = NULL;
//	int i = 1, j = 1;
//	for (i = 1; i < m; i++)
//	{
//		for (j = 1; j < n - 1; j++)//p是deltemp前面的一个指针
//		{
//			p = p->next;
//		}
//		deltemp = p->next;//找到要删除的结点
//		printf("第%d个人出列,其密码为%d\n", deltemp->id, deltemp->number);
//		n = deltemp->number;//把要删除的密码给到n
//		p->next = p->next->next;//删除
//		free(deltemp);
//	}
//}
//int main()
//{
//	struct Node* L;
//	init(&L);
//	create(&L, 7);
//	print(L);
//	joseph(20, 7, &L);
//	return 0;
//}
//3^3=0
//5^5=0
//a^a=0
//0^3=3
//0^5=5
//0^a=a
//3^3^5 = 5
//3^5^3 = 5
//异或支持交换律

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,7,5};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗是：%d\n", ret);
//
//	return 0;
//}


//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//计数器
//		//统计一下arr[i]在arr数组中出现的次数
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
//			printf("单身狗是：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//交换
//	//^ - 按（二进制）位异或
//	//相同为0，相异为1
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//3
//	int b = 0;//5
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	//输出-库函数
//	printf("hello world\n");
//
//	return 0;
//}