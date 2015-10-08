#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &n, &k);
	printf("%d %d %d", k / n, k - (k / n)*n, (k - (k / n)*n) ? n - k + (k / n)*n : 0);
	return 0;
}