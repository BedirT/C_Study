#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*1-	Write a program to display alphabets as given below.
 az by cx dw ev fu gt hs Ir jq kp lo mn nm ol pk qj ri sh tg uf ve wd xc yb za.
*/

char first = 'a' ;
char second = 'z' ;

int main ()
{
    for (int i = 0 ; i <= 25 ; i++) {
        
        printf("%c%c ", first, second);
        first++;
        second--;
    }
    return 0;
}
