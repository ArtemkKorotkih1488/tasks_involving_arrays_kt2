#include <stdio.h>
#define n 5			
int main () {
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {				
		scanf("%d", &arr[i]); 
		sum = sum + arr[i];
	}
	for (int j = 0; j < n; j++){
		printf("%d ", arr[j]);
	}	
	int max = arr[0];
	for (int i = 0; i < n; i++){
		if (max < arr[i])
			max = arr[i];
	}
	printf("\nmaximal: %d \nSumma; %d", max, sum);
	return 0;
}

