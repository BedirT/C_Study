#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* 1-	Write a function that displays the sequence 1 2 3 … N 
 (one number per line). Write a driver program (i.e., main function) 
 to test your function */

int i;
int n;

int main (){
    
    printf("Enter number: \n");
    scanf(" %d", &n );
    for ( i = 0; i < n ; i++) {
        printf("%d\n",i+1);
    }
    
    return 0;
}