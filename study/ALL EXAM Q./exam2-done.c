#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* Using a do while write a C program to
add numbers entered by user until user enters 0.*/

int n;
int sum = 0;

int main (){
    
    do {
    
        scanf(" %d", &n);

        sum += n;
   
    } while ( n != 0);
    
    printf("The sum is = %d\n", sum);
    
	return 0;
}
