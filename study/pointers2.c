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
#include <time.h>

int main () {
    
    int arr[10];
    int i;
    i = &arr[9]-arr;
    
    printf("%d",i);
    
    return 0 ;
    
}