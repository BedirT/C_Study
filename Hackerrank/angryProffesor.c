#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int testCases;
    int limitForLesson;
    int student;
    int present = 0;
    int i, a;
    
    scanf(" %d", &testCases);
    
    for( i=0 ; i < testCases ; i++){
        
        scanf(" %d %d", &student, &limitForLesson);
    
        int array[student];
    
        for( a=0 ; a < student ; a++ ){
            scanf(" %d", &array[a]); 
            if( array[a] <= 0){
                present++;
            }
        }    
        
        if( limitForLesson <= present ){
            printf("NO\n");
        }else
            printf("YES\n");
    } 
    return 0;
}
