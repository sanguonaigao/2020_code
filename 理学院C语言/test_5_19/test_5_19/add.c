#define _CRT_SECURE_NO_WARNINGS 1

//全局变量
//限制了g_val的作用域的扩展
//是的g_val只能在add.c内部使用

//static int g_val = 2020;


//全局变量
//int g_val = 2020;

//extern int a;
//extern int b;
//

//
//int Add()
//{
//	return a + b;
//}


//内部函数
//Add函数只能在自己所在的add.c文件内部使用
//
//static int Add(int a, int b)
//{
//	return a + b;
//}

//外部函数
//int Add(int a, int b)
//{
//	return a + b;
//}
void Input(char arr[])
{
	gets(arr);
}

void DelChar(char arr[], char ch)
{
	int i = 0;
	int j = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] != ch)
		{
			arr[j++] = arr[i];
		}
		i++;
	}
	arr[j] = '\0';
}