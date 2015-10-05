#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &a);
	printf("%d9%d", a, 9 - a);
	return 0;
}