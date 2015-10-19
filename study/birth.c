#include <stdio.h>
#include <stdlib.h>

int main ()
{

	int age;
	int currentyear = 2015;
	int birthyear;

    printf("When did you born? (year): \n");
    scanf(" %d", &birthyear);
    
	age = currentyear - birthyear;
	
	printf("You are %d years old\n", age);

	return 0;
}
