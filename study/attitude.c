#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main ()
{
	char peopleName [50] ;
	char attitude [25] ;
	char sentence [100] = "" ;

	puts("What are the guy's first and last names?:");
	gets(peopleName);
	puts("What is the attitude that you don't like?:");
	gets(attitude);
	
	strcat(sentence, peopleName );
	strcat(sentence, " is sooo ");
	strcat(sentence, attitude);

	puts(sentence);
	
	return 0;
}
