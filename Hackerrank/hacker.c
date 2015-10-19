#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,b;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    
    scanf(" %d", &t);
    
    int num[t][t];
          
    for( b = 1 ; b<=t ; b++ ){
        for( i = 1 ; i<=t ; i++ ){
            scanf(" %d", &num[b][i]);   
        }
    }for( b = 1 ; b<=t ; b++ ){
        for( i = 1 ; i<=t ; i++ ){
            printf("%d\t", num[b][i]);
        }
        printf("\n");
    }
    
    for( i=1 ; i<=t ; i++ ){
        sum1 += num[i][i];
    }
    int a = t;
    for( i=1 ; i<=t ; i++ ){
        sum2 += num[i][a];
        a--;
    }
    
    sum = abs(sum2 - sum1);
    printf("%d", sum);
    
    return 0;
}
