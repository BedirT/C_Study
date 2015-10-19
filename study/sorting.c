#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main (){
	int temp, sort, i; 
	int number = 10;
	int goals[number];

	for( i=0 ; number>i ; i++){
		
		goals[i] = ( rand()%25 ) + 1;
		
	}
	for( i=0 ; number>i ; i++){
		
		printf( "%d\n", goals[i] );
		
	}

	while(1){

		sort = 0;

		for( i=0 ; i<number-1 ; i++){

			if( goals[i] < goals[i+1] ){				
				temp = goals[i];
				goals[i] = goals[i+1];			
				goals[i+1] = temp;
				sort = 1;
			}
	
		}

		if(sort == 0){
			break;
		}
	
	}
	printf("Sorted List\n");

	for( i = 0 ; number>i ; i++)
		
		printf("%d\n", goals[i]);


	return 0;
}
