#include<stdio.h>
/* Количество дней по номеру месяца, год невисокосный */
int main () {
	int month;
	scanf("%d", &month);
	int days;
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		days = 28;
		break;
	default:
		days = 0;
		break;
	}
	if (days != 0) { printf("%d\n", days); }
	else { printf("Error\n"); }
	return 0;
}

