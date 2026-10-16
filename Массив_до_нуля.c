#include <stdio.h>
int main () {
	int a[100]={1, -2, 7, 4, 0, 5};
	for (int j = 0;a[j]!=0;j = j + 1){
		printf("%d ", a[j]);
	}
	return 0;
}
