#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*Use nested for to write program to perform sum = 1+ (1+2) + (1+2+3) + … + (1+2…+n) */
 
int sum = 0;
int n;
int add = 0;

int main ()
{
    scanf(" %d", &n);
    
    for ( int a = 0; a < n ; a++ ) {
        sum += a+1;
        for (int i = 0 ; i < n ; i++) {
            add += sum;
        }
    }
   
    printf("%d\n", sum);
    return 0;
}
