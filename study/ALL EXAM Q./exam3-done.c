#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// 1- Write a program to print the sum of series
//1 + 1/2 + 1/3 + 1/4 + ... + 1/N.  where n is a user input


float i;
float n;
float sum = 0.0;
float a;

int main ()

{
    scanf(" %f", &n);
    
    
    
    for ( i = 0 ; i < n ; i++) {
        
        a= ( 1 / (i+1) );
        sum = sum + a ;
        
    }
    
    printf("The sum is : %.5f\n", sum);
    
	return 0;
}
