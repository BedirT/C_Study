#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
void initializeArray(int numbers[]);
void indexSort (int numbers[], int indexes[]);

int main() {
    
    // Declare variables
    int numbers[10], indexes[10], i;
    // Randomly initialize the array numbers
    initializeArray(numbers);
    // Initialize the array indexes
    for(i = 0; i < 10; i++)
        indexes[i] = i;
    // Display the arrays before the sorting
    printf("numbers:\n");
    for(i=0; i<10; i++)
        printf("%d ",numbers[i]);
    printf("\nindexes:");
    for(int i=0; i<10; i++)
        printf("%d ",indexes[i]);
    // Sort the array
    indexSort(numbers, indexes);
    // Display the arrays after the sorting
    printf("\n*****************************\n") ;
    printf("numbers:") ;
    for(int i=0; i<10; i++)
        printf("%d ", numbers[i]);
    printf("\nindexes:");
    for(int i=0; i<10; i++)
        printf("%d ",indexes[i]);
    
    return 0;
}

void initializeArray(int numbers[]){

    srand(time(NULL));
    int i;                                  /////////////////////////////////////
    for (i=0; i<10; i++ ) {                 // Giving the values into numbers  //
        numbers[i]=rand()%100;              // randomly. For us to sort.       //
    }                                       /////////////////////////////////////
    
}

void indexSort (int numbers[], int indexes[]){
    
    int min,minIndex;
    int i,j;                                // Describing variables
    int holding[10];                        // An holder array
    
    for (i=0; i<10; i++ ) {
        holding[i] = numbers[i];            // We are copying our numbers to an
    }                                       // array to use it for finfing the
                                            // sorted indexes.
    for (j=0; j<10; j++) {
        
        min = holding[0];
        minIndex = 0;                       /////////////////////////////////////
        for (i=1; i<10; i++) {              // We are now finding the min value//
                                            // in our array and store it's     //
            if(holding[i] < min){           // index so that we can use it for //
                min = holding[i];           // printing our numbers with the   //
                minIndex= i;                // order, with our indexes         //
            }                               /////////////////////////////////////
        }
            indexes[j] = minIndex;
            holding[minIndex] = 100;        // We need new min. in every loop so
    }                                       // we raising our min value to 100.
    
}


