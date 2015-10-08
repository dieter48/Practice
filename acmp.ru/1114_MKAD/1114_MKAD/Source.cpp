#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &a, &b);
	int p = a * b - 109 * ((a * b) / 109);
	if (a < 0) printf("%d", 110 + p);
	else
		printf("%d", p + 1);
	return 0;
}