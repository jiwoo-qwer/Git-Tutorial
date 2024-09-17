#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y = 0;
	printf("input two integers: ");
	scanf("%d %d", &x, &y);

	printf("%d & %d = %d\n", x, y, x & y);
	printf("%d | %d = %d\n", x, y, x | y);
	printf("%d ^ %d = %d\n", x, y, x ^ y);
}