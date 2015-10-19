#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int days = 1;
	float peni = 0.01;	

	while( days <= 31 ){
		printf("%d.day \t $%.2f \n", days, peni);
		peni *= 2;
		days++;
	}	
	
	return 0;
}
