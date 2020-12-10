#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h> 
int main()
{
	float a, b, n;
	char ch;
	printf("请输入你想进行运算的两个数：");
	scanf("%d%d", &a, &b);
	getchar();
	printf("请输入你想进行的四则运算符号：");
	scanf("%c", &ch);
	switch (ch)
	{
	case'+': n = a + b;
		break;
	case'-': n = a - b;
		break;
	case'*': n = a*b;
		break;
	case'/': n = a / b;
		break;
	default:printf("error");
	}
	printf("answer=%.2f", n);


}