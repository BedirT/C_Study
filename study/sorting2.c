#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	int i, temp, sort;
	int number;

	printf("Please enter how many digit you will enter?\n");
	scanf(" %d", &number);

	int array[number];

	for( i = 0 ; i<number  ; i++){

		printf("Please enter %d. number\n", i+1);
		scanf(" %d", &array[i]);
	}
	
	while(1){
		
		sort = 0;

		for ( i = 0 ; i < number-1  ; i++ ){

			if( array[i] < array[i+1] ){
				
				temp = array[i];
				array[i] = array [i+1];
				array[i+1] = temp;
				sort = 1;

			}
		}
			
		if(sort == 0){
			break;
		}
	}

	printf("\nSORTED LIST\n");
	printf("-----------\n");

	for (i=0 ; number>i ; i++){
		printf("%d\n", array[i]);
	}printf("\n");

	return 0;
}
