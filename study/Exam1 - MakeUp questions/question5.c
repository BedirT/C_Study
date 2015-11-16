#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
void myFunction (char *word);

int main ()
{
    int i = 0 ;
    char name[6]= {'h','a','k','a','n','\0'};
    myFunction(name);
    while (name[i] != '\0') {
        printf("%c\n", name[i]);
        i++;
    }
    return 0;
}

void myFunction (char *word){
    char letter;
    int i=0, length= 0 ;
    while (word[i]!='\0') {
        i++;
    }
    length = i;
    for (i=0; i<length/2; i++) {
        letter = word[i];
        word[i] = word[length-1-i];
    }
}
