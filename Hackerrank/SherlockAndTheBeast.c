#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int t,n,y,x,storeX,storeY;

int main() {

	int i,a,result;
    
    scanf("%d",&t);
   
	 // Testcases
    for (a=0; a<t; a++) {
        // ASKING THE INPUT
        scanf("%d",&n);
        result = 0;
        // WE WILL LOOP FOR FINDING WE HAVE HOW MANY "5"'S AND "3"'S
        for (x=0; x<=n; x+=5) { // FOR 3'S WE USE X
            if((n-x)%3 == 0) {
                y = (n-x);
                result = x+y;
                if (n==result) break;
            }
            
        }
        // I HAVE IF-ELSE STATEMENT FOR FINDING IF ITS ANY NUMBER OF IT'S EQUAL TO MY N
        if (n==result){
            for(i=0; i<y; i++){
                printf("5");// PRINTED 5'S
            }
            for(i=0; i<x; i++){
                printf("3");// PRINTED 3'S
            }
            printf("\n");
        }else {
            printf("-1\n"); // DOESN'T MATCH ANY NUMBER ...
        }
    }
    return 0;
}
