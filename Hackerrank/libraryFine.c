#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int actualDay, returnDay, returnYear, returnMonth, actualMonth, actualYear;
int fine = 0;

int main() {
    
    scanf(" %d",&returnDay);
    scanf(" %d",&returnMonth);
    scanf(" %d",&returnYear);
    
    scanf(" %d",&actualDay);
    scanf(" %d",&actualMonth);
    scanf(" %d",&actualYear);
    
    if (actualYear >= returnYear){
        if ( actualMonth >= returnMonth){
            if ( actualDay >= returnDay){
                fine = 0;
            }else {
                fine = 15*(returnDay-actualDay);
            }
        }else {
            fine = 500*(returnMonth-actualMonth);
        }
    }else {
        fine = 10000;
    } 
    
    printf("%d", fine);
        
    return 0;
}
