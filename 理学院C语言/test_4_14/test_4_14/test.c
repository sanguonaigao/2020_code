#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//while
//	/*int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}*/
//
//	//do while
//	//int i = 1;
//
//	//do
//	//{
//	//	printf("%d ", i);
//	//	i++;
//	//} while (i <= 10);
//
//	//for
//	/*int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}*/
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	double money = 0.0;
//	double total = 0.0;
//	int num = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		printf("请输入募捐的钱数:>");
//		scanf("%lf", &money);
//		total += money;
//		num++;
//
//		if (total >= 100000.0)
//		{
//			break;
//		}
//	}
//	if (total>=100000.0)
//	{
//		printf("募捐成功\n");
//		printf("总共募捐:%lf\n", total);
//		printf("捐款人数：%d\n", num);
//		printf("平均每人捐款:%lf\n", total / num);
//	}
//	else
//	{
//		printf("募捐失败\n");
//		printf("参与人数：%d 总募捐：%lf元\n", num, total);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}
//	//1 2 3 4
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= 5; j++)
//		{
//			if (i == 3 && j == 1)
//			{
//				//break;
//				continue;
//			}
//			printf("%d\t", i*j);
//		}
//		//
//		printf("\n");
//	}
//
//	//int n = 0;
//	//for (i = 1; i <= 4; i++)
//	//{
//	//	//打印一行
//	//	int j = 0;
//	//	for (j = 1; j <= 5; j++)
//	//	{
//	//		printf("%d\t", i*j);
//	//		n++;
//	//		if (n%5 == 0)
//	//			printf("\n");
//	//	}
//	//}
//
//	return 0;
//}
//

#include <math.h>
//
//int main()
//{
//	double sum = 0.0;
//	double pai = 0.0;
//	int i = 1;
//	int flag = 1;
//	while (1)
//	{
//		if (fabs(flag*(1.0 / i)) < 1e-6)
//			break;
//		sum += flag*(1.0 / i);
//		i += 2;
//		flag = -flag;
//	}
//	pai = 4 * sum;
//	printf("%lf\n", pai);
//	return 0;
//}

//
//int main()
//{
//	//1 1 2 3 5 8 13 21 34 55 ....
//	int f1 = 1;
//	int f2 = 1;
//	int i = 0;
//	int f3 = 0;
//	printf("%d %d ", f1, f2);
//	for (i = 0; i < 38; i++)
//	{
//		f3 = f1 + f2;
//		printf("%d ", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//
//	return 0;
//}


//int main()
//{
//	//1 1 2 3 5 8 13 21 34 55 ....
//	int f1 = 1;
//	int f2 = 1;
//	int i = 0;
//	int f3 = 1;
//	int n = 0;
//	scanf("%d", &n);
//
//	for (i = 3; i <= n; i++)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//
//	printf("%d ", f3);
//
//	return 0;
//}

//int main()
//{
//	//1 1 2 3 5 8 13 21 34 55 ....
//	int f1 = 1;
//	int f2 = 1;
//	int i = 0;
//	int f3 = 0;
//	printf("%d %d ", f1, f2);
//	for (i = 1; i < 20; i++)
//	{
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//		printf("%d %d ", f1, f2);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int ch = 0;
//	//china!\n
//	while ((ch = getchar()) != '\n')
//	{
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			if ((ch >= 'W' && ch <= 'Z') || ((ch >= 'w') && (ch <= 'z')))
//			{
//				ch = ch - 22;
//			}
//			else
//			{
//				ch = ch + 4;
//			}
//			putchar(ch);
//		}
//		else
//		{
//			putchar(ch);//不是字母原样输出
//		}
//	}
//	return 0;
//}

//
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
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

#include <stdio.h>

int main() {
	int x = 3;
	int y = 3;
	switch (x % 2) {
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
}


