#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {
    
    int diceRoll;
    int a;
    
    for ( a=0 ; a<20 ; a++) {
        diceRoll = rand()%6 + 1 ;
        printf(" %i \n", diceRoll);
    }
    return 0;
}
