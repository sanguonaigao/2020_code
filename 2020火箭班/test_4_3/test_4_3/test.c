#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = 0;
//
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[20] = {0};
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}
//

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;//存储计算好的每一项
//	scanf("%d%d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//
//123

#include <math.h>
#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		//判断i是否为“水仙花数”
//		//1. 计算i的位数
//		int tmp = i;
//		while (tmp/=10)
//		{
//			count++;
//		}
//		//2. 得到i的每一位，计算每一位的位数次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//3. 判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// *********** 2*6-1
//  *********  2*5-1
//   *******   
//    *****
//     ***
//      *
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//打印上部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//先打印空格
//		int j = 0;
//		for (j = 0; j < line - 1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下部分2
//	for (i = 0; i < line-1; i++)
//	{
//		//打印一行
//		int j = 0;
//		//先打印空格
//		for (j = 0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//二级指针
//	int a = 10;
//	int* pa = &a;    //一级指针
//	int** ppa = &pa; //ppa就是二级指针
//	printf("%d\n", **ppa);
//	**ppa = 200;
//	//200
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	return 0;
//}

//
//指针数组
//好孩子
//
//
//int main()
//{
//	//int arr[10] = {0};//整形数组 - 存放整形数据
//	//char ch[5] = { 0 };//字符数组 - 存放字符数据
//	                   //指针数组 - 存放指针（地址）的
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int* arr2[4] = {&a, &b, &c, &d};//整形指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//
//	//char* arr3[5];
//	return 0;
//}

//char short int long float double - 内置类型
//学生:名字+学号+年龄+性别
//书
//复杂对象-复杂类型
//C语言提供了一个：struct - 结构体关键字
//
//学生的类型
//struct Stu
//{
//	//描述学生的相关属性
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//}s2,s3,s4;//s2,s3,s4 就是创建的结构体变量-全局变量
//
//int main()
//{
//	//s1是局部变量
//	struct Stu s1;//学生对象s1
//
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double d;
//};
//
//typedef struct T
//{
//	char buf[20];
//	struct S s;
//	int *p;
//}T;
//
////typedef - 类型定义- 类型重定义
//
//int main()
//{
//	int a = 10;
//	//struct S s = {100, 'w', "bit", 3.14};
//	//
//	//结构体变量.成员名
//	//结构体指针->成员名
//	//
//	T st = { "hello bit", {1000, 'b', "abcdef", 4.4}, &a};
//	T* pt = &st;
//	printf("%s\n", pt->buf);
//	printf("%lf\n", pt->s.d);
//
//	//printf("%s\n", st.buf);
//	//printf("%d\n", st.s.a);
//	//printf("%c\n", st.s.c);
//	//printf("%s\n", st.s.arr);
//	//printf("%lf\n", st.s.d);
//	//printf("%d\n", *(st.p));
//
//	//struct T st2;
//
//	return 0;
//}
//struct Stu
//{
//	//描述学生的相关属性
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//};//s2,s3,s4 就是创建的结构体变量-全局变量
//
//void print1(struct Stu tmp)
//{
//	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);
//}
//
//int main()
//{
//	struct Stu s = {"张三", "2019010305", 20, "男"};
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}