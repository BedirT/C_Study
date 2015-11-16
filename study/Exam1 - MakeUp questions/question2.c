#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
void myFunction (int *data);

int main ()
{
    int number = 7;
    myFunction(&number);
    printf("%d\n",number);
    return 0;
}

void myFunction (int *data){
    while (*data > 0) {
        *data = *data - 3;
    }
}