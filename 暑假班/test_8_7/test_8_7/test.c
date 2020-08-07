#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	//C语言中的一个关键字
	//sizeof(类型) - 计算类型创建变量所开辟空间的大小
	//sizeof 计算的大小，单位是字节

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));//4/8
	//标准规定：sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(long long));//8
	//标准规定：sizeof(long long) >= sizeof(long)

	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}

//VS编译器认为不安全的函数
//scanf
//strcpy
//strcat
//

//
//scanf  - 输入
//printf - 输出

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;//创建一个整形变量叫num并且赋值0
//	scanf("%d", &num);  //输入一个整数
//	//%d - 输入整形数据
//	printf("%d\n", num); //输出一个整数
//
//	return 0;
//}
//

//写代码了
//对于C语言代码来说
//一个C语言代码中必须包含一个main函数-主函数
//main函数是有固定写法的

//包含
//stdio
//std-标准
//i - input 
//o - output
//标准输入输出

//#include <stdio.h>
	
//int main()
//{
//	//print function
//	//打印   函数
//	//把hello bit打印到屏幕上 - 输出操作 - 
//	//库函数 - C语言自身提供的函数 - 引入头文件
//
//	printf("hello bit\n");
//	return 0;
//}
//


//写法已经过时了-不建议这样写代码
//void main()
//{
//
//}



//按键盘上的F10    fn+F10
//main函数 - 是程序的入口
//程序是从main函数的第一行开始执行的
//

//

//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
//


