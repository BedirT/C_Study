#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* Please write a function that calculates the average of 3 numbers.
 Write a driver program to test your function */

int avr( int a, int b, int c);
double end;
int num1,num2,num3;
int main (){
    
    printf("Enter num1 :");
    scanf(" %d", &num1);
    
    printf("Enter num2 :");
    scanf(" %d", &num2);
    
    printf("Enter num3 :");
    scanf(" %d", &num3);
    
    end=avr(num1,num2,num3);
    
    printf("result is %.2f", end);
    return 0;

}

int avr( int a, int b, int c){
    double result;
    
    result=(a+b+c)/3;
    
    return result;
}
