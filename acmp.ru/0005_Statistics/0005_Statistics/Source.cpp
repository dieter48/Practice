#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const int N = 100;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a[N], n, k = 0, l = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0) k++; 
		else { 
			if (i == 0) printf("%d",a[i]); 
			else 
				printf(" %d", a[i]); a[i] = 0; 
		}
	}
	printf("\n");
	for (int i = 0; i<n; i++)
		if (a[i]>0) {
			if (l == 0) l = 1;
			else 
				l = 2; 
			if (l == 1) printf("%d", a[i]);
			else 
				printf(" %d", a[i]);
	}
	printf("\n");
	if (k >= n - k) printf("YES"); 
	else 
		printf("NO");
	return 0;
}