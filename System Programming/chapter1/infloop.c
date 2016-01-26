
	/* This program goes into an infinite loop.  It can be paused
	** mid-execution in a debugger to see what is happening. (pg 25) */

#include <stdio.h>

int main() {

    int x,y;

    y=0;
    
    for (x=0; x<10; x++){
        printf("Still going\n");
        
        y=y+x;
        if (y > 10)
            x--;
    }
}

