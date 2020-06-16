#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//读文件 test.txt
//	//写文件 test.bak
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("打开文件test.txt失败\n");
//		return 1;
//	}
//	FILE* pfwrite = fopen("test.bak", "w");
//	if (pfwrite == NULL)
//	{
//		printf("打开文件test.bak失败\n");
//		//关闭上一个打开的文件
//		fclose(pfread);
//		return 1;
//	}
//	//读写文件内容-拷贝效果
//	//fgetc();//读取文件的时候，如果遇到文件末尾或者读取失败会返回EOF
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF) 
//	{
//		fputc(ch, pfwrite);
//	}
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//
//	//随机读写
//	//定位文件指针
//	fseek(pf, 4, SEEK_CUR);
//	printf("%d\n", ftell(pf));
//	//读取
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//o
//	fseek(pf, 1, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = {0};
//	//读取文件test.dat中的数据，到s中
//	FILE* pf = fopen("test.dat", "rb");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//	//二进制的方式读数据
//	fread(&s,  sizeof(struct Stu), 1, pf);
//
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct Stu s = { "张三",29,99.0f };
//	//写s的数据到文件中
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//	//二进制的方式写数据
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	struct Stu s = {0};
//	
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//	//读数据
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	struct Stu s = { "张三", 20, 99.5f };
//	//写s的数据到文件中
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//	//写数据
//	//按照一定的格式写文件-格式化的形式
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fgets - 读一行数据
//fputs - 写一行数据
//
//int main()
//{
//	char buf[100] = { 0 };
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//
//	//读文件
//	fgets(buf, 100, pf);
//	printf("%s", buf);
//	fgets(buf, 100, pf);
//	printf("%s", buf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//
//	//写文件
//	fputs("hello world\n", pf);
//	fputs("hello bit\n", pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fgetc 读一个字符
//fputc 写一个字符
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 1;
//	}
//	
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("文件打开失败\n");
//		return 1;
//	}
//	//写数据
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fputc('b', pf);
//		fputc('i', pf);
//		fputc('t', pf);
//	}
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//





