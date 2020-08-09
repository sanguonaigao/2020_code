#define _CRT_SECURE_NO_WARNINGS 1

//写一个加法的代码
#include <stdio.h>
#include <string.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	//函数 - 
	//f(x, y) = x+y;
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//int sum = num1 + num2;
	//函数的方式来解决
	//希望用一个加法的函数
	//Add
	int sum = Add(num1, num2);

	printf("%d\n", sum);
	return 0;
}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{ 
//		printf("我敲代码:%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗(1/0)？\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}

//注释


//int main()
//{
//	/*
//	创建变量a，并赋值10
//	*/
//	int a = 10;
//	
//	//创建数组arr，数组10个元素，并赋初值为0
//	int arr[10] = { 0 };
//	return 0;
//}



//
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//	return 0;
//}



//%d - 打印整形
//%s - 打印字符串
//%c - 打印字符


//十进制的数字
//0-9
//123
//100
//8进制数字
//0-7的数字组成的

//int main()
//{
//	//printf("%c\n", '\'');
//	/*printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");*/
//	/*printf("\a\a\a\a\a\a\a\a\a");*/
//	//printf("%c\n", '\101');//  '\ddd'
//	
//	//'\061'代表是 49 作为ASCII 码值所代表的字符
//	//16进制数字
//	//0-9-ABCDEF
//	//
//	printf("%c\n", '\x5F');
//	//5F
//	//80+15 = 95
//	//
//	return 0;
//}

//'\n';
//'\0';
//转义字符
//准变他的意思
//
//int main()
//{
//	//printf("c:\\code\\test.c");
//	//printf("hehe\n");//\n-换行
//
//	return 0;
//}

//strlen - string length - 字符串长度
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//
//	//char arr1[] = "bit";
//	//char arr2[] = { 'b', 'i', 't' ,'\0'};
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));//?
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' ,'\0'};
//	//%s 是打印字符串
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	//由双引号括起来的一串字符就是字符串
//	"abc";
//	"a";
//	"";//空字符串
//	printf("hello bit\n");
//	return 0;
//}

//枚举 - 一一列举
//生活中有些取值可以一一列举的
//性别：男，女，保密
//星期：1,2,3,4,5,6,7
//三原色：Red Green Blue

//创建一种枚举类型
//enum Sex
//{
//	//枚举类型Sex的三个可能取值 - 枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
////	enum Sex sex = FEMALE;
//	//MALE = 2;//err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//
//#define NUM 100
//
//int main()
//{
//	//NUM 是 #define定义的常量
//
//	//NUM = 200;
//	printf("打印结果是：%d\n", NUM);
//
//	return 0;
//}

//
//int main()
//{
//	//1. 字面常量
//	/*100;
//	'a';
//	3.14;*/
//	//2. const修饰的常变量
//	//const int num = 10;
//	//printf("num = %d\n", num);
//	//num = 20;
//	//printf("num = %d\n", num);
//
//	//const int n = 10;//常变量 - 具有常熟性的变量
//	//int arr[n] = {1,2,3};
//
//	return 0;
//}
//int b = 100;


//int main()
//{
//	printf("b = %d\n", b);
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok
//	}
//	//printf("a = %d\n", a);//No
//	printf("b = %d\n", b);
//	return 0;
//}

//
//int a = 100;
//
//void test()
//{
//	printf("test()--> a = %d\n", a);
//}
//
//int main()
//{
//	printf("%d\n", a);
//	test();
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		//printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个整数:");
//
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//
//	printf("%d\n", sum);
//	return 0;
//}


//
//全局变量 - 放在{}外的是全局变量
//int a = 100;
//
//int main()
//{
//	//局部变量a - 放在{}里边的就是局部变量
//	int a = 10;
//	printf("%d\n", a);//当全局变量和局部变量名字相同时，局部优先
//
//	return 0;
//}


//年龄

//int main()
//{
//	//存储年龄 - 30岁
//	//0-65535
//	//'a';
//	short age = 30;
//	char ch = 'a';
//	double weight = 45.7;
//
//	int salary = 100000;
//
//	return 0;
//}