#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdio.h>

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);

	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}


//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}


//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;//1011011000000000
//	int c = 0xb6000000;//10110110000000000000000000000000
//
//	if (a == 0xb6)
//		printf("a");//?
//
//	if (b == 0xb600)
//		printf("b");//?
//
//	if (c == 0xb6000000)
//		printf("c");//?
//
//	return 0;
//}


//
//int main()
//{
//	char a = 3;
//	char b = 127;
//
//	char c = a + b;
//	//a和b要发生整形提升
//	//00000000000000000000000000000011
//	//00000011
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111
//	//01111111
//	//00000000000000000000000001111111-b提升后
//	//00000000000000000000000000000011-a提升后
//	//00000000000000000000000010000010
//	//10000010-c
//	//11111111111111111111111110000010-c提升后-补码
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//
//	printf("c = %d\n", c);
//
//	////a 和 b要整形提升
//
//	//short s = 0;
//	////int - 4
//	//short d = a + s;
//
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	int price;
//};
//
//int main()
//{
//	struct Book b = {"C语言程序设计", 35};
//	//结构体变量.成员变量
//	printf("书名: %s  定价: %d\n", b.name, b.price);
//
//	struct Book* pb = &b;
//	//结构体指针->成员变量
//	printf("书名：%s  定价: %d\n", pb->name, pb->price);
//
//	return 0;
//}


//void test()
//{
//	printf("test\n");
//}
//
//int main()
//{
//	printf("hehe\n");//函数调用操作符
//
//	test();
//
//	return 0;
//}

//西安邮电大学
//实验室 - 纳新考试卷子

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	//arr + 4;
//	printf("%p\n", arr+4);//%p 是打印地址的
//	printf("%p\n", &arr[4]);//%p 是打印地址的
//
//	printf("%d\n", *(arr + 4));
//
//	printf("%d\n", arr[4]);//下标引用操作符
//	printf("%d\n", 4[arr]);//下标引用操作符
//
//	//*(arr+4) == arr[4]
//	//*(4+arr) == 4[arr]
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a>b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("c=%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	b = a > 5 ? 3 : -3;
//	
//	max = a > b ? a : b;
//
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//
//	i = a++||++b||d++;
//
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//
//	return 0;
//}

//
//10点10分回来
//

//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);//60
//	//if (18 <= age < 40)  //err
//	//if (age>=18 && age<40)
//	//{
//	//	printf("成年\n");
//	//}
//	if (age<18 || age>=40)
//	{
//		printf("不是成年人\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//a&b;//按（2进制）位与
//	//a&&b;//逻辑与
//	//int c = a&&b;
//
//	int c = a || b;//逻辑或
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a + 1;//1
//	b = ++a;//2 - 带有副作用的 - a变成了11
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = a++;//后置++ -----> 先使用a，再给a 自增1
//	//printf("a=%d b=%d\n", a, b);//11 10
//
//	//int b = ++a;//前置++   -----> 先给啊自增1，再使用a 
//	//printf("a=%d b=%d\n", a, b);//11 11
//
//	//int a = 10;
//	////int b = a--;
//	//int b = --a;
//
//	//printf("a=%d b=%d\n", a, b);//9 9
//
//	int a = 10;
//	printf("%d\n", ++a);//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 14;
//	a |= (1 << 4);
//	printf("%d\n", a);
//
//	a &= (~(1 << 4));
//
//	printf("%d\n", a);//14
//
//	//
//	//00000000000000000000000000001110
//	//00000000000000000000000000010000
//	//|
//	//00000000000000000000000000011110
//	//11111111111111111111111111101111
//	//
//	//00000000000000000000000000000001
//	//1<<4;
//	//
//	return 0;
//}

//int main()
//{
//	//原码->反码->补码
//	int a = 0;
//	printf("%d\n", ~a);
//	//
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//-1
//	return 0;
//}