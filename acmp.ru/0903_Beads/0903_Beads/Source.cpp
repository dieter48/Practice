#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	printf("%d ", n+1);
	return 0;
}