#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int myWrappers,leftWrappers,extraChoc;
int t, n, c, m;
int wrappers();

int main() {
    printf("enter t\n");
    scanf("%d", &t);
    
    printf("enter loop\n");
    for (int i=0; i<t ; i++) {
        scanf("%d %d %d",&n,&c,&m);
            printf("entered loop\n");
        int answer = 0;
        
        printf("came till this step ? 1 \n");

        myWrappers = n/c;
        extraChoc = myWrappers/m ;
        leftWrappers = myWrappers%m;
        
        printf("came till this step ? 2 \n");
        
        do {
             printf("came till this step ? 3 \n");
            int newWrappers = leftWrappers + extraChoc;
            extraChoc += newWrappers/m;
            leftWrappers = newWrappers%m;
        }while (leftWrappers>=m);
        printf("leftWrappers\tmyWrappers\tn\tc\n");

        printf("%d\t\t%d\t\t%d\t%d\n",leftWrappers,myWrappers,n,c);

                printf("came till this step ? 4 \n");
        
            answer = myWrappers + extraChoc ;
        
                printf("came till this step ? 5 \n");
        
        printf("%d\n",answer);
    }
    return 0;
}

int wrappers(){
    
    return extraChoc;
}