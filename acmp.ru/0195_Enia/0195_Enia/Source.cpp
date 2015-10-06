#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d%d", &n, &a, &b);
	printf("%d", a * b * n * 2);
	return 0;
}