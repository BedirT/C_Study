#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int testCases;
    int num1,num2;
    scanf("%d",&testCases);
    for ( int i = 0 ; i < testCases ; i++) {
        
        scanf("%d %d", &num1 , &num2);
        
        double startingPoint = sqrt(num1);
        double endingPoint = sqrt(num2);
        
        if (startingPoint != (int)startingPoint ) {
            startingPoint = (int)startingPoint+1;
        }
        
        int result = endingPoint-startingPoint+1;
        
        printf("%d\n",result);
        
    }
    return 0;
}