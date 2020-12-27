#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//
//	printf("%d\n", *p);
//
//	return 0;
//}

//
//char *GetMemory(void)
//{
//	static char p[] = "hello world";
//	//char* p = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int n = 10;
//	int arr[n];
//
//	return 0;
//}

//struct S
//{
//	int num;//4
//	char arr[];//
//};
//
//int main()
//{
//	struct S* pc = (struct S*)malloc(sizeof(struct S) + 20);
//	if (pc == NULL)
//		return 1;
//	pc->num = 10;
//	strcpy(pc->arr, "hello world");
//
//	printf("%d %s\n", pc->num, pc->arr);
//	//调整空间
//	struct S* p2 = (struct S*)realloc(pc, 44);
//	if (p2 == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		pc = p2;
//	}
//
//	free(pc);
//	pc = NULL;
//
//	//printf("%d\n", sizeof(struct S));//
//	return 0;
//}
//
//struct S
//{
//	int num;
//	char* arr;
//};
//int main()
//{
//	struct S* pc = (struct S*)malloc(sizeof(struct S));
//	if (pc == NULL)
//	{
//		return 1;
//	}
//	pc->num = 10;
//	pc->arr = (char*)malloc(20);
//	strcpy(pc->arr, "hello world");
//	//调整空间
//	char* ptr = (char*)realloc(pc->arr, 40);
//	if (ptr == NULL)
//		return 1;
//	else
//		pc->arr = ptr;
//	//....
//	printf("%d %s\n", pc->num, pc->arr);
//	free(pc->arr);
//	pc->arr = NULL;
//	free(pc);
//	pc = NULL;
//
//	return 0;
//}


//文件操作

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//#include <windows.h>
//
//FILE
//
//int main()
//{
//	while (1)
//	{
//		printf("hehe");
//		Sleep(1000);
//	}
//	return 0;
//}
//
//int main()
//{
//	//绝对路径
//	//相对路径
//	FILE* pf =  fopen("..\\src\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//?
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE*pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//写一个字符
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE*pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//读一个字符
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}