#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf(" %d", &a);
    
    for(int i = 0 ; i < a ; i++){
        
        for(int m =0 ; m <= i ; m++){
        
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}

