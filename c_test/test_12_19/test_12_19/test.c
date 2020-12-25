#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		//行数
//		for (i = 0; i<n; i++)
//		{
//			//每一行的打印
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//


#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		//行数
//		for (i = 0; i<n; i++)
//		{
//			//打印一行
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
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
		//行数
		int i = 0;
		for (i = 0; i<n; i++)
		{
			//打印一行
			//空格
			int j = 0;
			for (j = 0; j<n; j++)
			{
				if (i + j<n - 1)
					printf("  ");
				else
					printf("* ");
			}

			printf("\n");
		}
	}
	return 0;
}
