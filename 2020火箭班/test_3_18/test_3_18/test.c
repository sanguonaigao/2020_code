#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test()
//{
//	static int a = 10;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//
//	printf("a = %d\n", a);
//	int* p = &a;//p就是一个指针变量
//	*p = 20;//* - 解引用操作
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//自己创建的类型-自定义类型
//创建一个书的类型
//int a = 0;
//struct Book
//{
//	//描述书的细节信息
//	char name[30];//书名
//	double price;//定价
//	char id[30];//书号-ISBN-100099809
//};
//
////结构体变量.成员名
////结构体指针->成员名
////上面两种写法完全等价
//
//int main()
//{
//	//定义一本书
//	struct Book b1 = {"射雕英雄传", 55.62, "ISBN-100099809"};
//	//创建了一个结构体指针
//	struct Book* ps = &b1;
//	printf("书名： %s\n", (*ps).name);
//	printf("书名： %s\n", ps->name);
//	printf("定价： %lf\n", ps->price);
//
//	//struct Book b2 = {"C语言程序设计", 32.5, "ISBN-9090001"};
//	////打印
//	//printf("书名：%s\n", b1.name);
//	//printf("定价: %lf\n", b1.price);
//	//printf("书号: %s\n", b1.id);
//
//	return 0;
//}


//int main()
//{
//	;//空语句
//	return 0;
//}
//
//int main()
//{
//	/*int age = 20;
//	if (age < 18)
//		printf("未成年\n");*/
//
//	/*int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}		
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 60)
//		printf("中老年\n");
//	else if (age >= 60 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
//
//
//int main()
//{
//	int a=10;//不好
//	int a = 10;//好
//
//	int i = 0;
//	for (i= 0;i<10;i++)
//	{
//	}
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	//int age = 10;
//	//if (age = 5)//容易出错
//	//{
//	//	printf("hehe\n");
//	//}
//	int age = 10;
//	if (5 == age)//比较常亮和变量的值是否相等的时候，把常亮放在左边
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//输出1-100之间的奇数

//产生1-100之间的数
//判断每个数是否为奇数
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i = i + 2;
//	}
//
//	//while (i <= 100)
//	//{
//	//	//判断i是否为奇数
//	//	if (i % 2 == 1)
//	//		printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

//int main()
//{
//	// printf("hehe\n");
//	int age = 10;
//	if (age == 5)
//		printf("hehe\n");
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	/*if (1 == day)
//	{
//		printf("星期1\n");
//	}
//	else if (2 == day)
//	{
//		printf("星期2\n");
//	}
//	else if (3 == day)
//	{
//		printf("星期3\n");
//	}
//	else if (4 == day)
//	{
//		printf("星期4\n");
//	}
//	else if (5 == day)
//	{
//		printf("星期5\n");
//	}*/
//	//...
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//使用的代码的人-用户
//	switch (day)
//	{
//	default://默认选项，处理不能被case处理的情况
//		printf("输入错误\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//? ?
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//打印0-9

//int main()
//{
//	int i = 0;
//	//while循环中的break,用于终止循环
//	while (i<10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	//while循环中的continue，跳过本次循环后边的代码，直接去判断部分，进项下一次循环的入口判断
	while (i<10)
	{
		if (i == 5)
			continue;

		printf("%d ", i);
		i++;
	}
	return 0;
}

