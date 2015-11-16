#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
void myFunction (char *word);

int main ()
{
    int *ptr, number =2;
    ptr = &number;
    *ptr = (*ptr)*2;
    printf("%d\n",number);
    return 0;
}