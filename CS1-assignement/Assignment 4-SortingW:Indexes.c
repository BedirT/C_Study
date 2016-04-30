#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
void initializeArray(int numbers[]);
void indexSort (int numbers[], int indexes[]);

int main() {
    
    srand(time(NULL));                      // For a proper random number(Not nessesary)
    int i;
    int myArray[10];                        // Describing variables
    int indexesArray[10];
    
    for(i=0; i<10; i++){
        indexesArray[i] = i;                // We gave the value to our indexes
    }                                       // from 0 to 9
    
    initializeArray(myArray);               // We are calling our initializer array
    
                                            /////////////////////////////////////
    printf("\nNORMAL LIST\n");              // This is where we print our      //
    printf("-----------\n");                // Normal list, our random numbers //
    printf("indexes\tnumbers\n");           // with their indexes.             //
                                            //                                 //
    for (i=0 ; 10>i ; i++){                 //                                 //
        printf("%d\t",indexesArray[i]);     //                                 //
        printf("%d\n", myArray[i]);         //                                 //
    }                                       /////////////////////////////////////
    

    indexSort(myArray,indexesArray);        // We are calling our indexSort func.
    
    printf("\nSORTED LIST\n");              /////////////////////////////////////
    printf("-----------\n");                // Again printing , but this time  //
    printf("indexes\tnumbers\n");           // with sorted way.                //
                                            //                                 //
    for (i=0 ; 10>i ; i++){                 //                                 //
        printf("%d\t",indexesArray[i]);     //                                 //
        printf("%d\n", myArray[indexesArray[i]]);                              //
    }                                       /////////////////////////////////////

    return 0;
}

void initializeArray(int numbers[]){

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


