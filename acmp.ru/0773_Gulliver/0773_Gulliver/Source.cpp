#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x;
	int y;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%lf %d", &x, &y);
	printf("%.0f", x*x*y);
	return 0;
}