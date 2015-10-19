#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	char grade;
	
	printf("What is your grade: (a/b/c/d/f) \n");
	scanf("%s", &grade);
	
    switch(grade){
        case 'a' :  printf("WELL DONE \n");
                    break;
        case 'b' :  printf("Could be better \n");
                    break;
        case 'c' :  printf("Are u sleeping or what? \n");
                    break;
        case 'd' :  printf("So u were in school then ?? \n");
                    break;
        case 'f' :  printf("U so did not deserve beer today !! \n");
                    break;
        default :   printf("This doesn't even make sense. \n");
    }
	
    return 0;
}
