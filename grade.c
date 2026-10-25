#include <stdio.h>
#define MAX 20
struct student{
	char name[50];
};

int main(){
	struct student s;
	int grade, count = 0, sum = 0;
	printf("Write name- ");
	scanf(" %49[^\n]", s.name);
		
    while (1) {
		printf("Grade (0 to exit): ");
		scanf("%d", &grade);
		if (grade == 0) break;
		sum += grade;
		count++;
	}
	printf("\nName: %s\n", s.name);
	printf("Grades: %d\n", count);
	if (count > 0) printf("Average: %.2f\n", (double)sum / count);

	return 0;
}
