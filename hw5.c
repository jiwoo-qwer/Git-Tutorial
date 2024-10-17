#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Two(int n)
{
	if (n == 0)
		return;

	Two(n / 2);
	printf("%d", n % 2);
}

int main()
{
	int a;
	printf("양의 정수를 입력해주세요: ");
	scanf("%d", &a);
	if (a == 0) {
		printf("0");
	}
	else {
		Two(a);
	}
}