#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

int main() {
	int N;
	char a[11], b[11];
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s %s", a, b);
		int k = 0, l = 0;
		bool f;
		while (a[k] != '\0')
		{
			while (b[l] != '\0')
			{
				if (a[k] == b[l]) { f = true; break; }
				l++;
				f = false;
			}
			if (!f) { printf("%s\n", "NO"); break; }
			k++;
			l = 0;
		}
		if (f)
		{
			k = 0;
			l = 0;
			while (b[k] != '\0')
			{
				while (a[l] != '\0')
				{
					if (b[k] == a[l]) { f = true; break; }
					l++;
					f = false;
				}
				if (!f) { printf("%s\n", "NO"); break; }
				k++;
				l = 0;
			}
		} 
		if (f) printf("%s\n", "YES");
	}
	return 0;
}