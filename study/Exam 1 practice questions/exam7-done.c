#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* Write a program to read 10 numbers through the
 keyboard and count number of positive, negative and zero numbers. */

int array[9];
int positiveNumbers = 0;
int negativeNumbers = 0;
int neutralNumbers = 0;
int main ()
{
    for ( int i = 0 ; i < 10 ; i++) {
        
        scanf(" %d", &array[i]);
        
        if ( array[i] > 0) {
            
            positiveNumbers++;
            
        }else if ( array[i] < 0) {
            
            negativeNumbers++;
            
        }else
            neutralNumbers++;
    
    }
    printf("Positive numbers --- %d Negative numbers --- %d Zeros --- %d\n", positiveNumbers, negativeNumbers, neutralNumbers);
    return 0;
}
