
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[100];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//排序
	for (i = 0; i<n - 1; i++)
	{
		int j = 0;
		for (j = 0; j<n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//去重
	int j = 0;
	for (i = 0; i<n-1; i++)
	{
		//把i+1后边的元素往前移动
		if (arr[i] == arr[i + 1])
		{
			int k = 0;
			for (k = i; k<n - 1; k++)
			{
				arr[k] = arr[k + 1];
			}
			n--;
			i--;
		}
	}
	//打印
	for (i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}