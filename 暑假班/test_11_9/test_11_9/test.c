#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <ctype.h>


//limits.h
//float.h
//
//enum State
//{
//	VALID,
//	INVALID
//}state = VALID;
//
//int my_atoi(const char* str)
//{
//	int flag = 0;
//	state = INVALID;
//	//空指针
//	if (str == NULL)
//		return 0;
//	if (*str == '\0')
//		return 0;
//
//	//空白字符的处理
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//+-
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	//
//	long long ret = 0;
//	//
//	//flag = -1
//	//
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag*(*str - '0');
//		if (ret > INT_MAX || ret < INT_MIN)
//		{
//			ret = 0;
//			return (int)ret;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		state = VALID;
//		return (int)ret;
//	}
//
//	return (int)ret;
//}
//
//
//int main()
//{
//	//""
//	char*p = "   @-123";
//	int ret = my_atoi(p);//-123
//	if (state == VALID)
//	{
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");	
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	////写文件
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	//fputc('d', pf);
//	//fputc('e', pf);
//
//	fputc('q', stdout);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//EOF -end of file
//
//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("opne file for writting");
//		return 1;
//	}
//	//写数据
//	fputs("hello bit\n", pf);
//	fputs("haha\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	char input[20] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("opne file for reading");
//		return 1;
//	}
//	//读数据
//	fgets(input, 20, pf);
//	printf("%s", input);
//
//	fgets(input, 20, pf);
//	printf("%s", input);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//
//int main()
//{
//	FILE* pfRead = fopen("test1.txt", "r");
//	if (pfRead == NULL)
//	{
//		perror("open file for reading");
//		return 1;
//	}
//	FILE* pfWrite = fopen("test2.txt", "w");
//	if (pfWrite == NULL)
//	{
//		perror("open file for writting");
//		fclose(pfRead);
//		pfRead = NULL;
//		return 1;
//	}
//	//拷贝
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//main函数的参数

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};


//int main()
//{
//	struct Stu s = {"zhangsan", 20, 66.5f};
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct Stu s = {0};
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//sscanf
//sprintf

struct Stu
{
	char name[20];
	int age;
	float score;
};



int main()
{
	struct Stu s = { "zhangsan", 20, 66.5f };
	struct Stu tmp = { 0 };
	char str[100] = {0};
	sprintf(str, "%s %d %f", s.name, s.age, s.score);

	//printf("%s\n", str);
	sscanf(str, "%s %d %f", tmp.name, tmp.age, tmp.score);
	printf("%s %d %f", tmp.name, tmp.age, tmp.score);

	return 0;
}


