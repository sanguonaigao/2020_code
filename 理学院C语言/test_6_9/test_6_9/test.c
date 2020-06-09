#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

struct Stu
{
	//数据
	char name[20];
	float score;
	//指针
	struct Stu* next;
};

int main()
{
	struct Stu* head = NULL;
	struct Stu* cur = NULL;
	struct Stu s1 = { "张三", 95.5 };
	struct Stu s2 = { "李四", 88.5 };
	struct Stu s3 = { "王五", 90.0 };

	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;
	head = &s1;
	cur = head;

	while (cur != NULL)
	{
		printf("%s %f\n", cur->name, cur->score);
		cur = cur->next;
	}

	return 0;
}
//
//struct Stu
//{
//	long num;
//	char name[20];
//	float score[3];
//	float avg;//平均成绩
//};
//
//void Input(struct Stu* p)
//{
//	int i = 0;
//	//p[i] === *(p+i)
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d %s %f %f %f", &(p[i].num), p[i].name, &(p[i].score[0]), &(p[i].score[1]), &(p[i].score[2]));
//		p[i].avg = (p[i].score[0] + p[i].score[1] + p[i].score[2]) / 3;
//	}
//}
//
//struct Stu Max(struct Stu s[])
//{
//	int i = 0;
//	//假设下标为0的元素是平均成绩最高的学生
//	int max = 0;
//	for (i = 1; i < 3; i++)
//	{
//		if (s[i].avg > s[max].avg)
//		{
//			max = i;
//		}
//	}
//	//max里边记录的就是平均成绩最高的学生的下标
//	return s[max];
//}
//
//
//void Print(struct Stu s)
//{
//	printf("%d %s %f %f %f\n", s.num, s.name, s.score[0], s.score[1], s.score[2]);
//}
//
//int main()
//{
//	struct Stu s[3];//三个学生
//	struct Stu* ps = s;
//	Input(ps);//输入3个学生的信息
//	struct Stu tmp = Max(s);
//	Print(tmp);
//	return 0;
//}
//
//int main()
//{
//	struct Person
//	{
//		char name[20];
//		int count;//票数
//	};
//	char name[20] = {0};
//	struct Person p[3] = { { "zhangsan", 0 }, {"lisi", 0}, {"wangwu", 0} };	
//	struct Person* ps = p;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", ps->name, ps->count);
//		ps++
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s = {"张三", 20};
//	//printf("%p\n", &s);
//	struct Stu* ps = &s;//结构体的地址/结构体的指针
//	//printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//
//	//ps 是一个结构体的指针变量
//	return 0;
//}
//
//struct Person
//{
//	char name[20];
//	int count;//票数
//};
//
//int main()
//{
//	char name[20] = {0};
//	struct Person p[3] = { { "zhangsan", 0 }, {"lisi", 0}, {"wangwu", 0} };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("请输入被投票人的名字:>");
//		scanf("%s", name);
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (0 == strcmp(p[j].name, name))
//			{
//				p[j].count++;
//			}
//		}
//	}
//	printf("统计结果:\n");
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		printf("%s %d\n", p[j].name, p[j].count);
//	}
//
//	return 0;
//}
//int main()
//{
//	struct Stu
//	{
//		char name[20];
//		long num;
//		float score;
//	}  s[3];//结构体数组
//
//	struct Stu s2[10];
//
//	return 0;
//}
//
//int main()
//{
//	struct Stu
//	{
//		char name[20];
//		long num;
//		float score;
//	}s1, s2;
//	printf("输入两个学生的信息:>\n");
//
//	scanf("%s %d %f", s1.name, &(s1.num), &(s1.score));
//	scanf("%s %d %f", s2.name, &(s2.num), &(s2.score));
//
//	//比较和打印
//	if (s1.score > s2.score)
//	{
//		printf("%s %d %f\n", s1.name, s1.num, s1.score);
//	}
//	else if (s1.score < s2.score)
//	{
//		printf("%s %d %f\n", s2.name, s2.num, s2.score);
//	}
//	else
//	{
//		printf("%s %d %f\n", s1.name, s1.num, s1.score);
//		printf("%s %d %f\n", s2.name, s2.num, s2.score);
//	}
//	return 0;
//}
//
//int main()
//{
//	//struct Student
//	//{
//	//	long int num;
//	//	char name[20];
//	//	char sex;
//	//	char addr[30];
//	//}s = {20190101, "张三", 'm', "西安"};
//
//	//C99标准
//	//struct Date
//	//{
//	//	int year;
//	//	int month;
//	//	int day;
//	//};
//
//	//struct Student
//	//{
//	//	long int num;
//	//	char name[20];
//	//	char sex;
//	//	char addr[30];
//	//	struct Date birthday;//生日
//	//}s = {.name="张三",  .num=20190202, .sex = 'm', .addr = "beijing"};
//
//	//struct Date
//	//{
//	//	int year;
//	//	int month;
//	//	int day;
//	//};
//
//	//struct Student
//	//{
//	//	long int num;
//	//	char name[20];
//	//	char sex;
//	//	char addr[30];
//	//	struct Date birthday;//生日
//	//}s = { 20190202, "如花", 'f', "渭南", {1988, 12, 15} };
//
//	//printf("%s %c %d %s %d-%d-%d\n", s.name, s.sex, s.num, s.addr, 
//	//	s.birthday.year, s.birthday.month, s.birthday.day);
//
//
//	struct Date
//	{
//		int year;
//		int month;
//		int day;
//	};
//
//	struct Student
//	{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[30];
//		struct Date birthday;//生日
//	}s = {0};
//
//	struct Student tmp = s;
//
//	printf("%p\n", &tmp);
//	printf("%p\n", &(tmp.sex));
//
//
//	//printf("%s %c %d %s %d-%d-%d\n", tmp.name, tmp.sex, tmp.num, tmp.addr,
//	//	tmp.birthday.year, tmp.birthday.month, tmp.birthday.day);
//
//
//	return 0;
//}

//3-匿名结构体
//struct
//{
//	char name[20];
//	int age;
//	float score;
//} s1, s2;
//
//int main()
//{
//
//	return 0;
//}
//2
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//} s1,s2;
//
//int main()
//{
//	int age = 20;
//	s1.age = 200;
//	return 0;
//}
//1
//声明结构体类型
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//定义结构体变量
//	struct Stu s;
//	return 0;
//}