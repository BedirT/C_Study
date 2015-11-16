#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
void initializeArray(int numbers[]);
void indexSort (int numbers[], int indexes[]);

int main() {
	
    int i;
    
    srand(time(NULL));
    
    int myArray[9];
    int sortedArray[9];
    
    initializeArray(myArray);
    
    printf("\nNORMAL LIST\n");
    printf("-----------\n");
    
    for (i=0 ; 10>i ; i++){
        printf("%d\n", myArray[i]);
    }printf("\n");
    
	indexSort (myArray, sortedArray);

	printf("\nSORTED LIST\n");
	printf("-----------\n");

	for (i=0 ; 10>i ; i++){
		printf("%d\n", sortedArray[i]);
	}printf("\n");

	return 0;
}

void initializeArray(int numbers[]){
    
    for( int i = 0 ; i<10  ; i++){
        numbers[i] = rand()%100;
    }
    
}

void indexSort (int numbers[], int indexes[]){
    int temp,sort;
    
    for( int i = 0 ; i<10  ; i++){
        indexes[i] = numbers[i];
    }
    
    while(1){
        
        sort = 0;
        
        for ( int i = 0 ; i < 9  ; i++ ){
            
            if( indexes[i] < indexes[i+1] ){
                
                temp = indexes[i];
                indexes[i] = indexes [i+1];
                indexes[i+1] = temp;
                sort = 1;
                
            }
        }
        
        if(sort == 0){
            break;
        }
    }
    
    
    
}


