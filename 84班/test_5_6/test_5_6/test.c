#define _CRT_SECURE_NO_WARNINGS 1

//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔性数组成员
//};

#include <stdio.h>

#include <stdlib.h>
//
//struct S
//{
//	int n;//4
//	int arr[];//柔性数组成员//40
//};
//
//int main()
//{
//	//printf("%d\n",sizeof(struct S));
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	p->n = 100;
//	for(i=0; i<10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int*arr;
//};
//
//int main()
//{
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	p->n = 100;
//	p->arr = (int*)malloc(10*sizeof(int));
//	for(i=0; i<10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//
//	free(p->arr);
//	p->arr = NULL;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//
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


#include <errno.h>
#include <string.h>

//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//.. 表示上一级路径
//	//.  表示当前路径
//	//fopen("../../test.txt", "r")
//	//fopen("test.txt", "r");
//	
//	//绝对路径的写法
//	//fopen("C:\\2020_code\\84班\\test_5_6\\test_5_6\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if(pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if(pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//
//从键盘输入
//输出到屏幕.
//键盘&屏幕都是外部设备
//
//键盘-标准输入设备- stdin
//屏幕-标准输出设备- stdout
//是一个程序默认打开的两个流设备
//
//stdin FILE*
//stdout FILE*
//stderr FILE*
//


int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);

	return 0;
}