#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
////
////99.2
////
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.dat", "rb");
//	if (pf == NULL)
//	{
//		perror("open file for reading");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct Stu), 1, pf);
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
//	struct Stu s = { "张三", 20, 99.2f };
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	fputs("ABCDEF", pf);
//
//	fseek(pf, 4, SEEK_SET);
//	//fputc('W', pf);
//	int ret = ftell(pf);
//	printf("ret = %d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int ret = fgetc(pf);

//extern 声明外部符号
//extern int Add(int x, int y);
//
//int main()
//{
//	printf("%d\n", Add(1, 2));
//	return 0;
//}


int main()
{
	printf("hehe\n");
	getchar();
	return 0;
}

//
//IDE - 集成开发环境
//