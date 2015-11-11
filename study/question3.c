#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    int *ptr;
    ptr = (int *) malloc(1*sizeof(int));
    *ptr = 3;
    printf("%d\n",*ptr);
    ptr = (int *) malloc(1*sizeof(int));
    *ptr = 2;
    *ptr = *ptr +2 ;
    printf("%d\n",*ptr);
    return 0;
}