#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main () {
    
    int diceRoll1;
    int diceRoll2;
    int sum;
    char choice;
    
    srand(time(NULL));
    diceRoll1 = (rand ()%6) + 1 ;
    printf("First roll is : %d \n", diceRoll1);

    printf("Enter 'h' if you think the dice will come higher.\nEnter 'l' if you think the dice will come lower\nEnter 's' if you think the dice will come same\n");
    scanf(" %c", &choice);
        
    diceRoll2 = (rand ()%6) + 1 ;
    
    sum = diceRoll2 - diceRoll1;
    
    if ( choice == 'h' || choice == 'H' ) {
        if ( sum > 0 ) {
            printf("Well done !! The dice was %d \n", diceRoll2);
        }else{
            printf("You're wrong. The dice was %d \n", diceRoll2);
        }
    }else if( choice == 'l' || choice == 'L' ) {
        if ( sum < 0 ) {
            printf("Well done !! The dice was %d \n", diceRoll2);
        }else{
            printf("You're wrong. The dice was %d \n", diceRoll2);
        }
    }else if( choice == 's' || choice == 'S' ) {
        if ( sum == 0 ) {
            printf("Well done !! The dice was %d \n", diceRoll2);
        }else{
            printf("You're wrong. The dice was %d \n", diceRoll2);
        }
    }else{
        printf("You push the wrong button ...");
    }
    
    return 0;
}
