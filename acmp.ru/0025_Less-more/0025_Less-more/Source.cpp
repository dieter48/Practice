#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &a, &b);
	if (a == b) printf("=");
	if (a > b) printf(">");
	if (a < b) printf("<");
	return 0;
}