#include <stdio.h>
#define AR_LEN 100
int main () {
	int to[AR_LEN] = {1, 2, 3, 9, 5, -3, 7, 0},
	from [AR_LEN] = {4, 5, 6, 7, 0};
	int i = 0;
	while (from[i]!=0){
		to[i] = from[i];
		i = i + 1;
	}
	to[i] = 0;
	for (i = 0; to[i]!= 0; i = i + 1){
		printf("%d ", to[i]);
	}
	return 0;
}
