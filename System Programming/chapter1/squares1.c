
	/* This program tries to identify the largest integer whose
	** square is less than the given input number. It doesn't quite
	** work, and needs fixing before proceeding to the next part
	** of the programming problem. (pg 32) */

#include <stdio.h>

int main(){
    int i,number;

    printf("Enter a number: ");
    scanf("%d",&number);
    
    i=1;
    
    while (i*i <= number)
        i=i+1;
    
    i--;

    printf("%d is the largest square within %d\n",i*i,number);
}

