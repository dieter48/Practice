#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, s;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	s = n * 45 * 60 + (n - 1) * 5 * 60 + ((n - 1) / 2) * 10 * 60;
	printf("%d %d", s / 3600 + 9, (s - (s / 3600)*3600)/60);
	return 0;
}