#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int actualDay;
int returnDay;
int returnYear;
int returnMonth;
int actualMonth;
int actualYear;
int result = 0;

int main() {
    
    scanf(" %d",&returnDay);
    scanf(" %d",&returnMonth);
    scanf(" %d",&returnYear);
    
    scanf(" %d",&actualDay);
    scanf(" %d",&actualMonth);
    scanf(" %d",&actualYear);
    
    if ((returnDay <= actualDay) && (returnMonth <= actualMonth) && (returnYear <= actualYear)){
        result = result + 0;
    }else if ((returnDay >= actualDay) && (returnMonth == actualMonth) && (returnYear == actualYear)){
        result = result + 15 * (returnDay-actualDay);
    }else if ((returnMonth >= actualMonth) && (returnYear == actualYear)){
        result = result + 500 * (returnMonth-actualMonth);
    }else if (returnYear != actualYear){
        result = 10000;
    }
    
    printf("%d", result);
    
    return 0;
}
