#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int ret = func(1);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//写代码将三个数按从大到小输出
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//a=1 b=2 c=3
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	//a=2 b=1 c=3
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	//a=3 b=1 c=2
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//a=3 b=2 a=1
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}



//写一个代码打印1-100之间所有3的倍数的数字
//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//判断i是否为3的倍数
//		if (i % 3 == 0)
//			printf("%d ", i);
//
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int m = 24;
//	int n = 18;
//	int min = (m > n ? n : m);
//	while (1)
//	{
//		if (m%min == 0 && n%min == 0)
//		{
//			printf("最大公约数是：%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}

//int main()
//{
//	int m = 18;
//	int n = 24;
//	int r = 0;
//	//辗转相除法
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数:%d\n", n);
//	return 0;
//}


//打印1000年到2000年之间的闰年
//
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000)
//	{
//		//判断year是否为闰年
//		//闰年的判断规则
//		//1. 能被4整除，并且不能被100整除是闰年
//		//2. 能被400整除是闰年
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//
//		year++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//写一个代码：打印100~200之间的素数
//
//int main()
//{
//	int i = 100; 
//	int count = 0;
//	while (i <= 200)
//	{
//		//判断i是否为素数
//		//素数是只能被1和他本身的值整除的数
//		//1.产生2->i-1之间的数字，那产生的数字去试除i
//		//如果被整除，说明i不是素数，如果2->i-1之间的数字没有一个能整除i，那就说明i是素数
//		int j = 2;
//		while (j<i)
//		{
//			//拿j试除i
//			if (i%j == 0)
//			{
//				//不是素数
//				break;
//			}
//			j++;
//		}
//		//1,2
//		if (i == j)
//		{
//			//是素数
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//


#include <math.h>
//2
//
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j<=sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//3
//int main()
//{
//	int i = 101;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j <= sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i = i+2;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//试除法
//
// 素数求解的n种境界
//
//

//int main()
//{
//	//int a = 0;
//	int a = 0;//一个局部变量不初始化的时候，放的是随机值
//	printf("a=%d\n", a);
//	a = a + 1;
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//EOF - end of file - 文件结束标志 - 放在文件末尾
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码:>");//
//	scanf("%s", input);//123456
//	printf("请确认密码（Y/N）:>");
//	
//	//清空缓冲区
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	//
//	ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;//初始化
//
//	while (i < 10)//判断
//	{
//		printf("%d ", i);
//
//		i++;//调整
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//数组下表是从0开始
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	for (i = 100; i <=200; i++)
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	//for循环中的初始化、判断、调整 可以选择性的省略
//	//当判断部分被省略意味着判断部分恒为真
//
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	while (i<10);
//	return 0;
//}
//
//
//int main()
//{
//	//5*4*3*2*1
//	//n*(n-1)*(n-22)*...*3*2*1
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	/*while (i <= n)
//	{
//		ret = ret*i;
//		i++;
//	}*/
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6  = 9
//
//	for (n = 1; n <= 3; n++)
//	{
//		//计算n的阶乘
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	//1 2 6  = 9

	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);

	return 0;
}
