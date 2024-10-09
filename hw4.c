#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b = 0;
	int Dep = 1;
	
	printf("Please enter a number: ");
	scanf("%d", &a);
	
	if (a <= 1) {
		printf("It is not a prime number.\n");
		return 0;
	}
	for (b = 2; b <= a / 2; b++) {
		if (a % b == 0) {
			Dep = 0;
			break;
		}
	}
	if (Dep == 1) {
		printf("It is a prime number.\n");
	}
	else {
		printf("It is not a prime number.\n");
	}
}