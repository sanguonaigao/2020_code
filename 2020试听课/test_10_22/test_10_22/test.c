#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
int main()
{
	long int code;                  //code-密码
	char id[10] = { 0 };                        //定义变量  id-账号
	printf("请输入账号:\n");        //输出提示语
	scanf("%s", &id);                //输入账号
	printf("请输入密码:\n");
	scanf("%d", &code);
	if (strcmp(id, "xyz") == 0 && code == 727116)

		printf("Yes\n");

	else
		printf("密码或账号错误，请重新输入\n");
	return 0;
}


//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//
//	if (strcmp(input, "我是猪") == 0)//string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//Leetcode
//

//3^3=0
//a^a=0
//0^5=5
//0^3=3
//0^a=a
//3^3^5=5
//3^5^3=5
//异或支持交换律

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4,7,5};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗是：%d\n", ret);
//	return 0;
//}
//
//


//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,7,5};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;//计数
//		//统计arr[i]在数组arr中出现的次数
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗是：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//按二进制位异或
//	//相同为0，相异为1
//	//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	//输出函数-库函数
//	printf("hello world\n");
//	return 0;
//}