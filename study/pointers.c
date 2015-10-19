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

	return 0;
}
