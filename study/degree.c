#include <stdio.h>//These #include command have my libraries that I add in this project
#include <stdlib.h>

int main ()	/*This command is providing the start point of my codes*/
	
{
	int value;
	
	printf("Press 1 for Fahrenheit to Celcius\nPress 2 for Celcius to Fahrenheit\n");
	scanf(" %d", &value);

	if (value == 1){ // This lane is telling the comp. if the value is equal to one, run the following codes,right between next brackets.
	
		float f;	

		printf("Enter the Fahrenheit Degree: \n");
		scanf(" %f", &f);

		float c = ((f-32)/(1.8)); /* This is just the formula to convert ˚F to ˚C */

		printf("%.5f˚F is equal to %.5f˚C \n" , f, c); // This lane is for printing our answer.
	}
	else if (value == 2){
		float b; /* These lines are same as ˚F to ˚C, the difference between them is just 
		the formula and texts. */ 

		printf("Enter the Celcius Degree: \n");
		scanf(" %f", &b);

		float d = (b*(1.8)+32); //This also same formula, just converted to F-C
		
		printf("%.5f˚C is equal to %.5f˚F \n" , b, d); // I used .2f's because I just wanted 2 number after the point.
	}
	
	else{ /* This statement will show an error if the user enter an unvalid value. */
		printf("Please enter a valid value.\n");
    }

	return 0; /* This where the codes ends. The return tells the computer to stop. */
}
