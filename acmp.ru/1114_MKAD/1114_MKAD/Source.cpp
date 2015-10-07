#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &a, &b);
	if (a < 0) printf("%d", 109 + 109 * ((a * b) / 109) + a * b + 1);
	else
		printf("%d", a * b - 109 * ((a * b) / 109) + 1);
	return 0;
}