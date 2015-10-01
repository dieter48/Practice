#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &a);
	if (a != 5) {
		a = a / 10;
		printf("%d25", a*(a + 1));
	}
	else printf("25");
	return 0;
}