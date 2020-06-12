#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//函数指针
//	//int (*)(int, int) 函数指针的类型
//	//int (*pf)(int, int) = Add;//地址
//
//	typedef int(*pf_t)(int, int);//pf_t变身函数指针类型
//	pf_t pf; //函数指针
//	return 0;
//}
//int main()
//{
//	//int [10]
//	//int parr_t[10];//parr_t是数组名
//	typedef int parr_t[10];//parr_t 新的数组类型的类型名 等价于 ： int [10]
//	int arr[10];
//	parr_t arr2;//arr2也是一个数组，数组10个元素，每个元素是int
//
//	/*int arr[10] = {0};
//	int arr2[10] = { 0 };
//	int a = 10;*/
//	return 0;
//}

//typedef //类型定义

//typedef unsigned int uint;
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//} Stu;
//
//int main()
//{
//	//无符号整理a
//	unsigned int a = 10;
//	uint b = 20;
//
//	struct Stu s;
//	Stu s2;
//
//	return 0;
//}

//枚举-- 一一列举
//性别：男，女，保密
//星期：1,2,3,4,5,6,7
//三原色：Red Green Blue
//
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Weekday
//{
//	mon,
//	tue,
//	wed,
//	tru = 9,
//	fri,
//	sat,
//	sun
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	enum Sex s2 = FEMALE;
//	printf("%d %d %d %d %d %d %d\n", mon,tue,wed,tru,fri,sat,sun);
//	if (s == FEMALE)
//	{
//
//	}
//	return 0;
//}
//

//
//struct PeoInfo
//{
//	char name[20];
//	int num;
//	char sex;
//	char job;
//	//共用体
//	union
//	{
//		int class;
//		char position[15];
//	}category;//分类
//};
//
//int main()
//{
//	struct PeoInfo p[2];//学生，老师
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("请输入：编号，名字，性别，职业:>");
//		scanf("%d %s %c %c", &(p[i].num), p[i].name, &(p[i].sex), &(p[i].job));
//		if (p[i].job == 's')
//		{
//			printf("请输入班级:>");
//			scanf("%d", &(p[i].category.class));
//		}
//		else if (p[i].job == 't')
//		{
//			printf("请输入职务:>");
//			scanf("%s", p[i].category.position);
//		}
//	}
//	//打印数据
//	for (i = 0; i < 2; i++)
//	{
//		if (p[i].job == 's')
//		{
//			printf("%10s\t%5d\t%3c\t%3c\t%5d\n", p[i].name, p[i].num, p[i].sex, p[i].job, p[i].category.class);
//		}
//		else if (p[i].job == 't')
//		{
//			printf("%10s\t%5d\t%3c\t%3c\t%5s\n", p[i].name, p[i].num, p[i].sex, p[i].job, p[i].category.position);
//		}
//	}
//
//	return 0;
//}
//

//
//struct S
//{
//	char c;
//	int i;
//};
//共用体类型-联合体
//union U
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union U u = {.i = 100};
//	
//	//u.c = 'w';
//	//u.i = 100;
//	//printf("%d\n", sizeof(u));
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.c));
//	//printf("%p\n", &(u.i));
//
//	return 0;
//}

//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//
//void push_back(struct Node** ph, int d)
//{
//	//动态创建一个结点
//	struct Node* pnew = (struct Node*)malloc(sizeof(struct Node));
//	pnew->data = d;
//	pnew->next = NULL;
//	struct Node* tail = *ph;
//
//	if (*ph == NULL)
//	{
//		//空链表
//		*ph = pnew;
//	}
//	else
//	{
//		//非空链表
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		tail->next = pnew;
//	}
//}
//
//void show_list(struct Node* h)
//{
//	while (h)
//	{
//		printf("%d->", h->data);
//		h = h->next;
//	}
//	printf("over\n");
//}
//
//void destory_list(struct Node** ph)
//{
//	if (*ph == NULL)
//	{
//		//空链表不需要释放
//	}
//	else
//	{
//		struct Node* cur = *ph;
//		struct Node* next = cur->next;
//		while (cur != NULL)
//		{
//			free(cur);
//			cur = next;
//			if (cur == NULL)
//			{
//				break;
//			}
//			next = cur->next;
//		}
//		*ph = NULL;
//	}
//}
//int main()
//{
//	//在链表存储0-9这10个整数
//	//动态链表
//	//创建头指针
//	struct Node* head = NULL;
//	//给链表中插入0-9的元素
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		push_back(&head, i);//尾部插入一个元素
//	}
//	show_list(head);
//	//释放
//	destory_list(&head);
//	show_list(head);
//
//	return 0;
//}
//
