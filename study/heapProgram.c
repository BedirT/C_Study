#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main () {
    
    int i, howMany;
    int total = 0 ;
    double average = 0.0;
    int * pointsArray;
    
    ///////// TAKING AVERAGE OF NUMBERS WITH HEAP //////////
    
    
    
    printf("How many number we will average ? \n");
    scanf(" %d", &howMany);
    
    
    
    pointsArray = (int *) malloc(howMany * sizeof(int));//Barrowing space from computer
    
    printf("Enter them then :\n");
    
    for (i=0; i<howMany; i++) {
        scanf(" %d", &pointsArray[i]);
        total += pointsArray[i];
    }
    
    average = (double)total / (double)howMany;
    
    printf("The average is = %lf\n", average);
    return 0 ;
}