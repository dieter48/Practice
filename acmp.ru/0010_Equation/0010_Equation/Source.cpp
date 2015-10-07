#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, d;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for (int x = -100; x <= 100; x++)
		if (a*x*x*x + b*x*x + c*x + d == 0) printf("%d ", x);
	return 0;
}