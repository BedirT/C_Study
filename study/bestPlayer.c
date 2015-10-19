#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	int i;
	int player[5] = {1, 2, 3, 4, 5};
	int goalTotal[5] = { 32, 34, 23, 30, 20};
	int matchPlayed[5] = {30, 31, 20, 29, 18};
	float gpg[5];
	float bestGPG = 0.0;
	int bestPlayer;


	for( i=0; i<5; i++){
	
        gpg[i] = (float)goalTotal[i] / (float)matchPlayed[i] ;
        printf("%d \t %d \t %d \t%.2f\n", player[i], goalTotal[i], matchPlayed[i], gpg[i]);
	
        if (bestGPG < gpg[i]) {
            bestGPG = gpg[i];
            bestPlayer = player[i];
        }
        
    }

    printf("\nThe best player is %d \n\n", bestPlayer);
    
	return 0;
}
