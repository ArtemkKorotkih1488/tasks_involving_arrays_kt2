#include <stdio.h>
#define MAKS 100
void my_strccpy(char to[], char from[]);
void reverse(char s[]);
int main() {
	char from[MAKS], to[MAKS];
	scanf("%99s", from);
	
	my_strccpy(to, from);
	printf("to = %s\n", to);
	
	reverse(to);
	printf("reverse(to) = %s\n", to);
	return 0;
}
void my_strccpy(char to[], char from[]) {
	int i = 0;
	while (from[i] != '\0') {   
		to[i] = from[i];
		i = i + 1;
	}
	to[i] = '\0';
}
void reverse(char s[]) {
	int n = 0;
	int i, j;
	char t;
	while (s[n] != '\0') {
		n = n + 1;
	}
	if (n > 0 && s[n] == '\0') {   
		n = n - 1;
	}
	i = 0;
	j = n;
	while (i < j) {
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i = i + 1;
		j = j - 1;
	}
}
