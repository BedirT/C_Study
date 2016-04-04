#include<stdio.h>
//void odd (int n) {
//    printf("O%d\n", n);
//    
//}void even (int n) {
//        printf("E%d\n", n);
//}
//int main () {
//    int sum = 0;
//    while (sum<=7) {
//        sum+=2;
//        if (sum%2==0) {
//            even(sum--);
//        
//        }else
//            odd(++sum);
//    }
//    return 0;
//}
int main () {
    int list[6] = {9,3,7,5,1},value,i;
    value = list[0];
    for (i=0; i<6; ++i) {
        if(value>list[i]){
            value=list[i];
        }
    }
    value+=8;
    printf("%d\n",value);
    return 0 ;
}

10
40