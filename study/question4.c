#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int myFunction (int *list,int size);

int main ()
{
    int *ptr,i;
    ptr = (int *) malloc(5*sizeof(int));
    for (i=0; i<5; i++)
        ptr[i] = i;
    printf("%d\n",myFunction(ptr,5));
    return 0;
}

int myFunction (int *list,int size){
    int result = 0,i;
    for (i=0; i<size; i++)
        result = result + list[i];
    return result/size;
}