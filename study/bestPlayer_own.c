#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main () {
    char player[50][10];
	int i, p;
	int matchPlayed[5];
	int goals[5];
	float gpg[5];
	float bestGPG = 0.0;
	char bestPlayer[10];
    int n;
    
    printf("How many player");
    scanf(" %d", &n);
    
    for(i=0;i<n;i++)
        for(int j=0;j<10;j++)
            player[i][j]=' ';
    
	for(p=0; p<n; p++){
    
    printf("Enter the %d.players name that you want to add to chart:\t\n", p+1);
    scanf(" %s", player[p]);

	printf("How many match did the %d.player played this year:\t\n", p+1);
	scanf(" %d", &matchPlayed[p]);
 
	printf("How many goal did he score:  \n");
	scanf(" %d", &goals[p]);
        
	}
    printf("Name \t Match Played \t Goals \t GPG \n");
    
    for( i=0; i<n; i++){
		gpg[i] = (float)goals[i] / (float)matchPlayed[i];
        printf("%s \t %d \t\t %d \t %.2f \n", player[i], matchPlayed[i], goals[i], gpg[i]);
        
		if(bestGPG < gpg[i]){
 			bestGPG = gpg[i];
            for (int j=0;j<strlen(player[i]);j++)
                bestPlayer[j]=player[i][j];
        }
    }
    for (i=0;i<10;i++)
        if (bestPlayer[i]<'A' || (bestPlayer[i]>'Z' && bestPlayer[i]<'a') || bestPlayer[i]>'z')
            bestPlayer[i]=' ';
	printf("The best player is %s \n", bestPlayer);

	return 0;
}