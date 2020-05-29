#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int average = a&b + ((a^b) >> 1);
	printf("avg = %d\n", average);

	return 0;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//右移一位有除2的效果
//	int average = a + ((b - a) >> 1);
//	printf("avg = %d\n", average);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int average = (a + b) / 2;
//	printf("avg = %d\n", average);
//
//	return 0;
//}


//使用judge函数判断num是否为2的幂次方
//int judge(int n)
//{
//	if ((n&(n - 1)) == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = judge(num);
//	if (ret == 1)
//	{
//		printf("%d 是2的幂次方\n", num);
//	}
//	else
//	{
//		printf("%d 不是2的幂次方\n", num);
//	}
//
//	return 0;
//}

////使用judge函数判断num是否为2的幂次方
//int judge(int num)
//{
//	int ret = 1;
//	while (ret <= num)
//	{
//		//如果小于，则说明还没穷举完
//		if (ret < num)
//		{
//			//每次产生一个2的幂次方数
//			ret *= 2;
//		}
//		else
//		{
//			//是
//			return 1;
//		}
//	}
//	//不是
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//确定每一行打印几项
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int *p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//参数为数组
//void Move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void Move(int*p, int sz)
//{
//	int* left = p;
//	int* right = p+sz-1;
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//10 9 8 7 6 5 4 3 2 1
//	Move(arr, 10);
//	print(arr, 10);
//
//	return 0;
//}
//
//void set(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//}
//
//void set1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;
//	//数组名是首元素地址 int
//	set(arr, sz);//把数组arr的内容设置为0-9
//	print(arr, sz);//把数组内容进行打印
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	//3
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//	/*for (i = 0; i < 10; i++,p++)
//	{
//		printf("%d ", *p);
//	}*/
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p++);
//	}
//
//	//int* p1 = &arr[0];
//	//int* p2 = &arr[9];
//	//printf("%d\n", p2 - p1);//指针-指针
//
//	return 0;
//}

//
//int main() 
//{
//	//int a = 10;
//	//&a;//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指针法
//	int i = 0;
//	int*p = arr;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//  //1
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(arr + i));
//	//}
//  //2
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//int i = 0;
//	////下标法
//	////for (i = 0; i < 10; i++)
//	////{
//	////	printf("%d ", arr[i]);
//	////}
//
//	////int* p = &arr[0];//int
//	//int* p = arr;//数组名是首元素的地址
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p ====> %p\n", p+i, &arr[i]);
//	//	//p+i      arr+i  &arr[i]
//	//	//*(p+i)   *(arr+i)  *&arr[i]
//	//	//
//	//}
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量
//	*pa = 20;
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	return 0;
//}