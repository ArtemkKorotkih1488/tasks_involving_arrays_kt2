#include <stdio.h>
#define n 5
int main() {
	int arr[n];
	int summa = 0;
	int kolichestvo = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		summa = summa + arr[i];
	}
	for (int j = 0; j < n; j++) {
		printf("%d ", arr[j]);
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			kolichestvo++;
		}
	}
	float srednee = summa / 5.0;
	printf("\nsrednee: %.2f \nchetnyh: %d", srednee, kolichestvo);
	return 0;
}
