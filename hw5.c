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
	printf("���� ������ �Է����ּ���: ");
	scanf("%d", &a);
	if (a == 0) {
		printf("0");
	}
	else {
		Two(a);
	}
}