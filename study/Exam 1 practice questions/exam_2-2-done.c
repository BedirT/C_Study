#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* 2-	Write a function which has two arguments (i.e., x, y) and returns the 
 product x*y. You are not allowed to use the * operator. Instead, please design
 an algorithm using the sum x+x+x+…+x (y times) to calculate the multiplication.
*/
int func (int a, int b);

int num1;
int num2;
int result;

int main (){
    
    printf("First num:");
    scanf(" %d", &num1);
    
    printf("Second num:");
    scanf(" %d", &num2);
    
    result = func(num1,num2);
    
    printf("result is %d\n", result );
    
    return 0;
}


int func (int a, int b){
    
    int equal;
    
    for (int i = 0; i < b; i++) {
        equal += a;
    }
    
    return equal;
}