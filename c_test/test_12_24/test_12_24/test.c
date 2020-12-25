#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		//打印的行数
//		for (i = 0; i<n; i++)
//		{
//			//打印一行
//			//先打印空格
//			int j = 0;
//			for (j = 0; j<n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//再打印*+空格
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");//换行
//		}
//	}
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		//上 - n 行
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			//一行
//			//空格
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf(" ");
//			}
//			//*+空格
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		//下 - n+1 行
//		for (i = 0; i<n + 1; i++)
//		{
//			//下半部分的一行的打印
//			//空格
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			//*+空格
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		//上-n行
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			//*+空格
//			int j = 0;
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			//空格
//			for (j = n + 1 - i; j<n + 1; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		//下-n+1行
//		for (i = 0; i<n + 1; i++)
//		{
//			//*+空格
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			//空格
//			for (j = i + 1; j<n + 1; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		//上-n行
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//下-n+1行
//		for (i = 0; i<n + 1; i++)
//		{
//			//空格
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf("  ");
//			}
//			//*
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			//打印一行
//			//空格 + * + 空格
//			int j = 0;
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 0; j<n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if ((i == 0) || (i == n - 1) || (j == 0) || (j == n-1))
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = 0; j<n; j++)
			{
				if (0==j || i == j || i == n - 1)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}