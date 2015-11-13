#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* Using a while loop, write a C program to find factorial of a
 positive integer entered by user. (Factorial of n = 1*2*3...*n)
 Output
 Enter a positive integer: 4
 Factorial of 4 = 24
 */

int num;
int i;
long long result = 1;

int main(){
    
    printf("Enter a positive integer: ");
    scanf(" %d", &num);
    
    for ( i = 0 ; i < num ; i++) {
        
        result *= (i+1);
        
    }
    
    printf("Factorial of %d = %lld\n", num, result);
    
    return 0;
}
