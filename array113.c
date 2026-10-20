#include <stdio.h>

int main()
{
	int a[100], n, imax, t;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i = i + 1)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < n - 1; i = i + 1) {
		imax = 0;
		for (int j = 1; j < n - i; j = j + 1) {
			if (a[j] > a[imax])
				imax = j;
		}
		t = a[imax];
		a[imax] = a[n - 1 - i];
		a[n - 1 - i] = t;
		
		for (int j = 0; j < n; j = j + 1)
			printf("%d ", a[j]);
		printf("\n");
	}
	
	return 0;
}
