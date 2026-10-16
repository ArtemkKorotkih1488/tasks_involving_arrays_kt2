#include <stdio.h>
int main () {
	int a[100]={1, 3, 5, 4, 6, 0};
	int schetchik = 0;
	for (int i = 0; i < 7;i = i + 1){
		if (a[i] == 0){
			break;
		}
		schetchik++;
	}
	printf("%d", schetchik);
	return 0;
}
