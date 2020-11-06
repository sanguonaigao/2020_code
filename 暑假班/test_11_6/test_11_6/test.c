#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int x = 1;
//	do{
//		printf("%2d\n", x++);
//	} while (x--);
//	return 0;
//}

//#include<stdio.h>
////hehe
//int main(){//hehe
//	printf("hehe\n"); 
//	printf("haha\n");
//	return 0;
//}

//
//#include <windows.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//		Sleep(1000);
//	}
//	return 0;
//}

//
//int a = 0, c = 0;
//do{
//	--c;//-1
//	a = a - 1;//-1
//} while (a>0);
//
//

//for(x = 0, y = 0;    (y = 123) && (x<4);   x++);

//int year = 1009, *  p = &year;

//11|10
//1011
//1010
//1011
//

//3 5
//3
//6
//9
//12
//15
//6 7 8 9 10 11 12 13 14 15 
//4 5 6 7 8 9 
//
#include <stdio.h>
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

#include <stdio.h>



//×Ö·û´®µÄÄæÐò
void reverse(char*left, char*right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void revserse_string(char* str)
{
	while (*str)
	{
		char* start = str;
		char* end = str;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//ÄæÐòµ¥´Ê
		reverse(start, end - 1);
		if (*end != '\0')
			str = end + 1;
		else
			str = end;
	}
	reverse();
}
int main()
{
	char arr[100] = { 0 };
	//
	gets(arr);
	//·­×ª
	//beijing. like I
	revserse_string(arr);
	printf("%s", arr);
	return 0;
}

//I like beijing.
//I ekil .gnijieb
//beijing. like I
