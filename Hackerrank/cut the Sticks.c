#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int t;
int arrayOfNums[1000];
int allNotZero = 1;
int main() {
    
    scanf("%d",&t);
    
    for(int i =0 ; i<t ;i++){
        scanf("%d",&arrayOfNums[i]);
    }
    //while(allNotZero != 0){
    
        int lowest = arrayOfNums[0];
        for(int j =0 ; j<t ;j++){
            printf("Entered 1\n");
            
            if(arrayOfNums[j]<=lowest){
                printf("Entered 2\n");
                lowest = arrayOfNums[j];
        }
        
        for(int k=0 ; k<t ; k++){
            printf("Entered 3\n");
            arrayOfNums[k] -= lowest;
        }
        allNotZero = 0;
        for(int l=0 ; l<t ; l++){
            printf("%d\n",t);
            printf("Array nums of l is %d\n",arrayOfNums[l]);
            if (arrayOfNums[l] != 0){
                printf("Entered 4\n");
                allNotZero++;
            }
        }
        
            printf("%d\n\n\n",allNotZero);
        }
    
        // TILL HERE

        return 0;
}


