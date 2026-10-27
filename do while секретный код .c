#include <stdio.h>
int main(void) {
	int secret = 1234;
	int code;
	int attempts = 3;
	do {
		printf("Введи код: ");
		scanf("%d", &code);
		attempts--;
		if (code != secret && attempts > 0)
			printf("Неверно. Осталось попыток: %d\n", attempts);
	} while (code != secret && attempts > 0);
	if (code == secret)
		printf("Доступ разрешён\n");
	else
		printf("Доступ заблокирован\n");
	return 0;
}

