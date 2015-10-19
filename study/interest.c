#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float balance, interest;
	int time, wait;
	int today = 2015;
	
	printf("Enter how much you have in your bank account: \n");
	scanf("%f", &balance);

	printf("How much is your banks interest: \n");
	scanf("%f", &interest);


	/*printf("When are you thinking to take your money back? \n");
	scanf("%d", &wait);

	time = wait - today;*/

	balance *= interest;
	printf("After 1 year your balance will be: %.3f \n", balance);	

	return 0;
}
