#define _CRT_SECURE_NO_WARNINGS 1


//"abcdef"
//"abq"

#include <stdio.h>

//int arr[10];
//1 2 3 4 5 6 7 8 9 10
//10 9 8 7 6 5 4 3 2 1
//ÄæÖÃ
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//ÄæÖÃ
//	int left = 0;
//	int right = 9;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}


int main()
{
	int n = 0;
	int arr[50] = { 0 };
	int del = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &del);//ÒªÉ¾³ýµÄÔªËØ
	int j = 0;
	for (i = 0; i<n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}

	for (i = 0; i<j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}