#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* 1-	Write a program to find the triangular number of a given integer.
 Fox example triangular of 5 is (1+2+3+4+5) 15. Use do-while loop. */

int n;
int sum = 0;

int main (){
    
    scanf("%d", &n);
    
    do {
        
        sum += n;
        n--;
        
    } while ( n > 0 );
    
    printf("The triangular number of a given integer is %d\n", sum);

    return 0;
}
