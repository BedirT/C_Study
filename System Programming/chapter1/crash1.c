/* This program crashes.  The crash point can be found
 ** using a debugger. (pgs 21-22). */

#include <stdio.h>

int main()
{
    int x,y;
    
    y=54389;
    
    for (x=10; x>0; x--){
        y=y/x;
    }
    
    printf("%d\n",y);
    
    return 0;
}