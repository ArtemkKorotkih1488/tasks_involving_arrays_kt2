#include <stdio.h>

int main()
{
	int a[100], n, t;
	scanf("%d", &n);
	for (int i = 0; i < n; i = i + 1){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i = i + 1) {
		for (int j = 0; j < n - i - 1; j = j + 1) {
			if (a[j] > a[j+1]) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
		for (int j = 0; j < n; j = j + 1)
			printf("%d ", a[j]);
		printf("\n");
	}
	return 0;
}
