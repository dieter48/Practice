#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a,b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &a, &b);
	printf("%d %d", b-1, a-1);
	return 0;
}