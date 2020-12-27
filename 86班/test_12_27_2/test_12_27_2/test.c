#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//标准输入流-stdin
//标准输出流-stdout
//标准错误流-stderr
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputc('r', stdout);
//	//流-水流
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	//流-水流
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//写一行
//	fputs("hello bit\n", pf);
//	fputs("hehe\n", pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//读一行
//	char arr[100] = { 0 };
//	fgets(arr, 99, pf);
//	printf("%s", arr);
//
//	fgets(arr, 99, pf);
//	printf("%s", arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//};
////
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct S s = { "张三", 20 };
//	fprintf(pf, "%s %d", s.name, s.age);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct S s = {0};
//	fscanf(pf, "%s %d", s.name, &(s.age));
//
//	printf("%s %d\n", s.name, s.age);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct S
//{
//	char arr[20];
//	int a;
//	double d;
//};

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的写文件
//	struct S s = {"呵呵", 20, 3.14};
//	fwrite(&s, sizeof(s), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的读文件
//	struct S s = {0};
//	int ret = fread(&s, sizeof(s), 1, pf);
//	printf("%s %d %lf\n", s.arr, s.a, s.d);
//	printf("ret = %d\n", ret);
//	ret = fread(&s, sizeof(s), 1, pf);
//	printf("ret = %d\n", ret);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct S
//{
//	char arr[10];
//	int i;
//	double d;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 3.14 };
//	struct S s2 = { 0 };
//	//sprintf
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %lf", s.arr, s.i, s.d);
//	//buf
//	printf("%s\n", buf);//1
//	sscanf(buf, "%s %d %lf", s2.arr, &(s2.i), &(s2.d));
//	printf("%s %d %lf\n", s2.arr, s2.i, s2.d);//2
//	return 0;
//}

//scanf   是应用于标准输入流的格式化的输入语句
//prinf   是应用于标准输出流的格式化的输出语句
//fscanf  是应用于所以输入流的格式化的输入语句
//fprintf 是应用于所以输出流的格式化的输出语句
//sscanf  是从字符串中读取格式化的数据
//sprinf  是把格式化的数据输出到字符串中

//
// 深信服 - 18-20 29
//
//
//int main()
//{
//	//ABCDEF
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 1;
//	//读
//	int ch = fgetc(pf);//A
//	printf("%c\n", ch);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);//F
//	printf("%c\n", ch);
//	int ret = ftell(pf);
//	printf("%d\n", ret);//
//	rewind(pf);
//	ch = fgetc(pf);//A
//	printf("%c\n", ch);
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}

//Add
//main
//
//IDE 集成开发环境
//编辑器+编译器+调试器
//


