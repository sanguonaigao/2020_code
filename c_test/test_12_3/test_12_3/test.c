#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//printf("abc\ndef");
//	//C����ת���ַ�
//	//
//	printf("%d", strlen("c:\test\041\test.c"));
//	//   \t -- tab - ˮƽ�Ʊ���
//	//   \041 -- \ddd  d��8��������
//	//   ��33��ΪASCII��ֵ�������ַ�
//	printf("%c\n", '\041');
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	//sizeof - ������ - ���Ǻ���
//	//sizeof(int)
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(a));
//
//
//	//printf("The size of short is %d bytes.\n", sizeof(short));
//	//printf("The size of int is %d bytes.\n", sizeof(int));
//	//printf("The size of long is %d bytes.\n", sizeof(long));
//	//printf("The size of long long is %d bytes.\n", sizeof(long long));
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", 100);
//	//printf("%c\n", 100);
//	//printf("%s\n", "abcdef");
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%x\n", &a);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);//1234
//	//���
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	//int ch = getchar();//a\n
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();//����'\n'
//	}
//	return 0;
//}

//���뻺�����ĸ���


int main()
{
	char password[20] = { 0 };
 	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ��(Y/N):>");
	getchar();//������������\n

	int ch = getchar();//
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");

	return 0;
}

������������Ŀ�����ύ�����ͼ���ύͨ����2�Ž�ͼ��