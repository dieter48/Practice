#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	printf("The next number for the number %d is %d.\n", n, n + 1);
	printf("The previous number for the number %d is %d.", n, n - 1);
	return 0;
}