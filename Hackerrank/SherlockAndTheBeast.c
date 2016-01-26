#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int t,n,y,x,storeX,storeY;

int main() {
    
    scanf("%d",&t);
    // Testcases
    for (int i=0;i<t;i++){
        // ASKING THE INPUT
        scanf("%d",&n);
        int result = 0;
        // WE WILL LOOP FOR FINDING WE HAVE HOW MANY "5"'S AND "3"'S
        for (x=n/5;x>=0;x--){ // FOR 3'S WE USE X
            if((n-5*x)%3==0){
                y = (n-5*x)/3;
                result = 5*x+3*y;
                if (n==result) break;
            }
            
        }
        // I HAVE IF-ELSE STATEMENT FOR FINDING IF ITS ANY NUMBER OF IT'S EQUAL TO MY N
        if (n==result){
            for(int i=0; i<3*y; i++){
                printf("5");// PRINTED 5'S
            }
            for(int i=0; i<5*x; i++){
                printf("3");// PRINTED 3'S
            }
            printf("\n");
        }else {
            printf("-1\n"); // DOESN'T MATCH ANY NUMBER ...
        }
    }
    return 0;
}