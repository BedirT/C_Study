#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/* 1-	Use nested for to print
 0   0
 0   1
 0   2
 1   0
 1   1
 1   2
 2   0
 2   1
 2   2
 3   0
 3   1
 3   2
 */

int main ()
{
    for ( int i = 0 ; i < 4 ; i++) {
        for ( int n = 0 ; n < 3 ; n++) {
            printf("%d %d\n", i , n);
        }
    }
    
	return 0;
}
