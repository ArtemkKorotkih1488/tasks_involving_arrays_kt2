#include <stdio.h>
#define n 5
int main() {
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < n; j++) {
		printf("%d ", arr[j]);
	}
	printf("\nobratno: ");
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	return 0;
}
