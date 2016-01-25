
	/* This is an exercise for debugging. (pg 42) */

	/* This code has a compile-time error, and at
	** least one run-time error.  */

#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
    int n,i;
    int d2,count; // int d2,count, we need semicolon
    double d1;

    while (1)
    {
        printf("Enter a number (0 to quit): ");
        
        scanf("%d",&n);
        
        if (n == 0)
            break;
        
        count=0;
        
        for (i=1; i<=n; i++){                    // for (i=0; i<n; i++){
            
            d1=(double)n/(double)i;             // Dinamnator cannot be zero.
            d2=n/i;                             // Dinamnator cannot be zero.
            if (fabs(d1-(double)d2) < 0.00001)  // That's why we changed i's
                count++;                        // starting value to 1
        }                                       // and we made i<=n because we
                                                // need that one more step which
        if (count == 2)                         // i=0 were doing.
            printf("%d is prime\n",n);
        
        else
            printf("%d is not prime\n",n);
    }
}

