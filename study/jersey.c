#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	int jersey = 1;
	
	do{
		if(jersey==5 || jersey==8){
			jersey++;
			continue;
		}
	printf("%d is available \n", jersey);
	jersey++;

	}while(jersey <= 10);
	
	return 0;
}
