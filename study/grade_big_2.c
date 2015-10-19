#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	char grade;
	
	while (grade != 'Q'){

	printf("Some bad parent reactions to grades, enjoy ... (Press Q for quit.)\n\n");
	printf("What is your final grade in this lesson (A/B/C/D/F): \n\n");
	scanf("%s", &grade);
	
	switch(grade){
		case 'A' : printf("Yeah, but is there anyone done better? \n\n");
			   break;
		case 'B' : printf("Oww! Again, I knew u were not study in your room! \n\n");
			   break;
		case 'C' : printf("Well u screwed again, not my problem \n\n");
			   break;
		case 'D' : printf("So what are u going to school, how !\n\n");
			   break;
		case 'F' : printf("U so did not deserve beer today !!\n\n");
			   break;
		case 'Q' : printf("C u next time :) \n");
			   break;
		default  : printf("There no such an answer ... \n\n");
	}
	}
	return 0;
}
