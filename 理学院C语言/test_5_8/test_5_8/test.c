#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void print_star()
{
	printf("**********************\n");
}

void print_message()
{
	printf("   How do you do !    \n");
}

int main()
{
	print_star();
	print_star();

	print_message();

	print_star();
	print_star();

	return 0;
}

//int main()
//{
//	printf("**********************\n");
//	printf("   How do you do !    \n");
//	printf("**********************\n");
//	return 0;
//}






//题目名称：
//字符串旋转结果
//题目内容：
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	//arr2是否为arr1旋转后得到的？
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		//旋转1个字符
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		//把旋转之后的字符串和arr2比较是否相等
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("arr2是arr1旋转得来的\n");
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("arr2不是arr1旋转得来的\n");
//	}
//	return 0;
//}


//字符串旋转问题-经典笔试面试题
//题目名称：
//字符串左旋
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//
//	//方法2：
//	char arr[20] = "abcdef";
//	int k = 4;
//	int len = strlen(arr);
//	int left = 0;
//	int right = k - 1;
//	//逆序左边的字符
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	//逆序右边的字符
//	left = k;
//	right = len - 1;
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	//逆序整个字符串
//	left = 0;
//	right = len - 1;
//	while (left<right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	//方法1：
//	//char arr[20] = "abcdef";
//	//旋转字符
//	//int k = 4;
//	//int i = 0;
//	//int len = strlen(arr);//6
//
//	//for (i = 0; i < k; i++)
//	//{
//	//	//左旋转1个字符
//	//	char tmp = arr[0];
//	//	int j = 0;
//	//	for (j = 0; j < len - 1; j++)
//	//	{
//	//		arr[j] = arr[j + 1];
//	//	}
//	//	arr[len - 1] = tmp;
//	//}
//
//	//printf("%s\n", arr);
//
//	return 0;
//}




//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include <stdio.h>

//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//调整数组元素
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left<right)
//	{
//		//从前向后找偶数
//		while ((left <= right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从后向前找奇数
//		while ((left <= right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换找到的奇数个偶数
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//暴力求解
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1 2 3 4 5 6 7 8 9 10
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//调整
//	int tmp[10] = { 0 };
//	//处理奇数
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			tmp[j] = arr[i];
//			j++;
//		}
//	}
//	//处理偶数
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			tmp[j] = arr[i];
//			j++;
//		}
//	}
//	//拷贝
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = tmp[i];
//	}
//	//打印
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//

