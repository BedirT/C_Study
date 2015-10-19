#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	float num1, num2, result;
    int selection;
	
	printf("Please enter 1 or 2 \n1- For getting number's power \n2- For getting number's square root\n");
	scanf(" %d", &selection);
	
	if( selection == 1){
		
        printf("Enter base's value : \n");
		scanf(" %f", &num1);

		printf("Enter power's value : \n");
		scanf(" %f", &num2);

		printf( " Result = %.2f\n", pow(num1,num2) );
	}else if( selection == 2){
        
        printf("Enter the number :\n");
        scanf(" %f", &num1);
        
        printf("Result = %.2f\n", sqrt(num1) );
    }
        else{
            printf("Please enter a valid value\n");
	}
	
	return 0;
}
