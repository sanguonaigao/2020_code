#include <stdio.h>
#include <string.h>

int main()
{
	/*int a = 10;
	scanf("%d", &a);
	printf("%d\n", a);*/

	char arr[10] = { 0 };

	strcpy(arr, "hello");
	printf("%s\n", arr);

	return 0;
}

