#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &a);
	if (a > 0) printf("%d", (a + 1)*a / 2);
	if (a < 0) printf("%d", 1 + (1 - a)*a / 2); 
	if (a == 0) printf("%d", 1);
	return 0;
}