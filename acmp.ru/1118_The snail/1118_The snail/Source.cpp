#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d%d", &h, &a, &b);
	printf("%d", (h-b>0)?int((float(h - b) / (a - b))+0.9):1);
	return 0;
}