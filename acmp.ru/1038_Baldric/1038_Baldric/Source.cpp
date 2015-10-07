#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &a);
	printf("%d", int(a/10.0+0.5));
	return 0;
}