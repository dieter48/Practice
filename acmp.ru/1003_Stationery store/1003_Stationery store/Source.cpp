#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, y, z, s;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%lf %lf %lf", &x, &y, &z);
	s = x * 3 + y * 5 + z * 12;
	printf("%.0f", s);
	return 0;
}