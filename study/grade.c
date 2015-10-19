#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int grade1, grade2, grade3;
	
	printf("Enter your grades: \n");
	scanf(" %d", &grade1);
	scanf(" %d", &grade2);
	scanf(" %d", &grade3);

	float avg = (grade1 + grade2 + grade3) / 3 ;
	
	printf("Average: %.2f \n", avg);

	if (avg >= 90){
		printf("Grade: A \n");
	}else if (avg >= 80){
		printf("Grade: B \n");
	}else if (avg >= 70){
		printf("Grade: C \n");
	}else if (avg >= 60){
		printf("Grade: D \n");
	}else{
		printf("You are a dumb! \n");
	}

	return 0;
}
