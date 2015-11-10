/*
    ALL THE PRACTICES ABOUT
    POINTERS AND ETC.
    (JUST THE PRACTICES,NOT
    THE PROGRAMS)
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main () {

	int mark = 19 ;

	printf("Adress \t Name \t Value \n");

	printf("%p \t %s \t %d \n", &mark ,"mark", mark );

	int * pMark = &mark;

	printf("%p \t %s \t %d \n", pMark ,"mark", mark );

	printf("%p \t %s \t %p \n", &pMark,"pMark", pMark);
    
    int adana = 20;
    
    int * address = &adana;
    
    printf("%p \t %s \t %d \n", address, "adana", adana);
    
    int array[5] = {10,12,14,16,18} ;
    
    printf("%p \t %s \t %d \n", &array[0], "array.1", array[0]);
    printf("%p \t %s \t %d \n", &array[1], "array.2", array[1]);
    printf("%p \t %s \t %d \n", &array[2], "array.3", array[2]);
    printf("%p \t %s \t %d \n", &array[4], "array.4", array[3]);
    printf("%p \t %s \t %d \n", &array[3], "array.5", array[4]);
    
    ///////////////////////////////////////////////////////////
    
    int someNumber = 10;
    
    int *ptrThisNumber = &someNumber;
    
    printf ("\nsomeNumbers address is %p\n",ptrThisNumber);
    
    printf ("%d\n", someNumber);
    
    *ptrThisNumber = 20;
    
    printf ("%d\n", someNumber);
    
    ///////////////////////////////////////////////////////////
    
    printf("\n*array : %d\n", *array);
    
    printf("\n*array+2 : %d\n", *(array+2));
    
    ///////////////////////////////////////////////////////////
    
    char movie1[] = "Awesome Movie";
    
    char * movie2 = "This is suck";
    
    puts(movie1);
    puts(movie2);
    
    movie2 = "No No AWESOME";
    
    puts(movie2);
    
//    movie1 = "No No AWESOME";
//    
//    puts(movie2);
    
     /// NOT POSSIBLE BECAUSE ARRAYS ARe CONSTANT
    
    
    char * pointIt = "I can do it.";
    
    pointIt = "I think I changed";
    
    puts(pointIt);
    
    ///////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////
    
    char movieName[20];
    
    char *nameIt = movieName;
    
    //fgets(nameIt, 20, stdin);

    puts(movieName);
    
    ///////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////
    //////// MEMORY ALLOCATION - MALLOC - THE HEAP ////////////
    ///////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////
    
    int * points;
    
    points = (int *) malloc(5 * sizeof(int));
    
    free(points);
    
    ///////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////
    
    int * letsTryAgain;
    
    letsTryAgain = (int *) malloc(6* sizeof(int));
    
    free(letsTryAgain);
    
    ///////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////
    
    printf("int    %lu\n",sizeof(int));
    printf("float  %lu\n",sizeof(float));
    printf("double %lu\n",sizeof(double));
    printf("long   %lu\n",sizeof(long));
    printf("l.long %lu\n",sizeof(long long));
    printf("char   %lu\n",sizeof(char));
    
    // Learned size of int , char, float ...
    
    
    
    return 0;
}


