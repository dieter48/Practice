#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, a[100][3];
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &N);
	for (int i = 0; i < N;i++)
		scanf("%d%d%d", &(a[i][0]), &(a[i][1]), &(a[i][2]));
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++)
			if (a[i][0] * 3600 + a[i][1] * 60 + a[i][2]>a[j][0] * 3600 + a[j][1] * 60 + a[j][2]) {
				a[i][0] += a[j][0];
				a[i][1] += a[j][1];
				a[i][2] += a[j][2];
				a[j][0] = a[i][0] - a[j][0];
				a[j][1] = a[i][1] - a[j][1];
				a[j][2] = a[i][2] - a[j][2];
				a[i][0] -= a[j][0];
				a[i][1] -= a[j][1];
				a[i][2] -= a[j][2];
			}
	}
	for (int i = 0; i < N; i++)
		printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
	return 0;
}