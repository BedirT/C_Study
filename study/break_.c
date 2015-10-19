#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	int amount;
	int maxAmount = 10;
	int a;

	printf("How many times do you want this loop to loop? (Max 10) : ");
	scanf(" %d", &amount);

	for(a=1; a <= maxAmount; a++){
		
		printf("%d \n", a);
		if(a==amount){
			break;
		}
	}	
	return 0;
}
