
#include <stdio.h>

int main()
{
	char arr[5] = { 0 };//arr中只有5个元素的空间
	scanf("%s", arr);//这里输入的字符如果超过5个呢？怎么办？
	printf("%s\n", arr);
	return 0;
}


