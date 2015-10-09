#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &x);
	printf("%d %d %d", x/6, x-2*(x/6), x/6);
	return 0;
}