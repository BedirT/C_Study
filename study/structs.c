#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "studentInfo.h"

int main () {
    
    struct studentInfo bedir;
    struct studentInfo yolal;
    struct studentInfo hamza;
    
    bedir.age = 19;
    hamza.age = 21;
    yolal.age = 20;
    
    hamza.ID = 1;
    bedir.ID = 2;
    yolal.ID = 3;
    
    gets(hamza.name);
    
    printf("%s\n",hamza.name);
    printf("%d\n",hamza.ID);
    printf("%d\n",hamza.age);
    
}