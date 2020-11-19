#define _CRT_SECURE_NO_WARNINGS 1

//
//newc++file.cpp
//notepad++
//

//#define 标识符常量

#include <stdio.h>

//#define MAX 1000
//#define NUM 20
//
//
//int main()
//{
//	int m = MAX;
//	printf("%d\n", m);
//	return 0;
//}

//#define 定义宏

//#define SUM(X,Y) ((X)+(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 10 * SUM(a, b);
//	int sum = 10 * ((a)+(b));
//	//int sum = 10 * a + b;
//	//int sum = a + b;//替换
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;//指针变量-存放地址
//	*pa = 20;//* -- 解引用操作，间接访问操作符
//
//	printf("%d\n", a);//20
//
//
//	//char ch = 'w';
//	//char * pc = &ch;
//
//	//printf("%p\n", &a);//& 取地址操作符
//	//printf("%d\n", sizeof(a));//4 个字节
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//  d = 0;
//
//	double* pd = &d;
//	*pd = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*pa = &a;

//	char c = 'w';
//	char* pc = &c;
//
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//
//	return 0;
//}

//
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	char id[13];
//};
//
//int main()
//{
//	int a = 10;
//
//	struct Stu s = {"张三", 20, "男", "20200101"};
//	struct Stu * ps = &s;
//	//结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	//结构成员访问操作符
//	//.
//	//结构体变量.成员名
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
//
//	return 0;
//}
//

//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap(int* px, int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数来交换a和b
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	//;//空语句
//	int age = 10;
//	if (age == 18)
//	{
//		printf("成年\n");
//		printf("交朋友\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}

//int main()
//{
//	/*int age = 60;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age>=18 && age<30)
//		printf("青年\n");
//	else if (age>=30 &&age<50)
//		printf("中年\n");*/
//
//	int age = 60;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("青年\n");
//		else if (age >= 30 && age < 50)
//			printf("中年\n");
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	
//
//	return 0;
//}

//规范代码风格
//

//<高质量C/C++编程>



//int main()
//{
//	char first_name[20];
//	char FirstName[20];
//	int a = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	}
//	return 0;
//}

//int main()
//{
//
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	/*int num = 1;
//	if (num = 5)
//	{
//		printf("hehe\n");
//	}*/
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	default:
//		printf("输入错误\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	
//	}
//
//	/*switch (day)
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
//	}*/
//	//if (1 == day)
//	//	printf("星期1\n");
//	//else if (2 == day)
//	//	printf("星期2\n");
//	//else if (3 == day)
//	//	printf("星期3\n");
//	//...
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:
//		m++;break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//
