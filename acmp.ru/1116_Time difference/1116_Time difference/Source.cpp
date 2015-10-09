#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m, s, S[2];
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	for (int i = 0; i < 2; i++)
	{
		scanf("%d%d%d", &h, &m, &s);
		S[i] = h * 3600 + m * 60 + s;
	}
	printf("%d", S[1] - S[0]);
	return 0;
}