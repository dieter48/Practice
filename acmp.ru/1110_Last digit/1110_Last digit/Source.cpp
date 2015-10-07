#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &a);
	printf("%d", (a+10) % 10);
	return 0;
}