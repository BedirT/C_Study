#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main ()

{

	char name[13]= "Bedir Tapkan";	
	printf ("\nMy name is %s\n", name);

	name[2]= 'k' ;
	printf ("My other name is %s\n", name);

	char brand[]= "tesla";
	printf("%s is the most popular car in the world\n", brand);

	strcpy (brand, "ulker");
	printf ("%s is the most beautiful chocolate in here.\n", brand);

	return 0;

}
