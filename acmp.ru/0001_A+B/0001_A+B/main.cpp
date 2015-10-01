#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &a, &b);
	printf("%d", a+b);
	return 0;
}