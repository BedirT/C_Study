#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
    
    char str2[100], str1[100];
    int num1[100], num2[100], sum[101];
    int i, hand = 0;
    int lenghtOfSum = 0, lenghtOfNum1 = 0, lenghtOfNum2 = 0;
    
    /////////////////////////////////////////////////
    // Num's lenght //
    
    printf("Please enter your first long integer\n");
    scanf("%s", str1);

    for(lenghtOfNum1=0; str1[lenghtOfNum1]!='\0'; lenghtOfNum1++);
    //printf("%d\n",lenghtOfNum1);
    
    printf("Please enter your second long integer\n");
    scanf("%s", str2);
    
    for(lenghtOfNum2=0; str1[lenghtOfNum2]!='\0'; lenghtOfNum2++);
    //printf("%d\n",lenghtOfNum2);
    
    /////////////////////////////////////////////////
    // Num's values //
    
    for (i = 0 ; i<lenghtOfNum1 ; i++ ) {
        
        num1[i] = str1[i] - '0';
        //printf("%d\n",num1[i]);
        
    }
    for (i = 0 ; i<lenghtOfNum2 ; i++ ) {
        
        num2[i] = str2[i] - '0';
        //printf("%d\n",num2[i]);
        
    }
    
    /////////////////////////////////////////////////
    // SUM's Lenght //
   
    lenghtOfSum = lenghtOfNum1;
    
    if (lenghtOfNum1<lenghtOfNum2)
        lenghtOfSum = lenghtOfNum2;
    if (lenghtOfNum1==lenghtOfNum2 && (num1[lenghtOfNum1]+num2[lenghtOfNum2]>10))
        lenghtOfSum = lenghtOfNum1+1;
    
    //printf("%d\n",lenghtOfSum);
    
    /////////////////////////////////////////////////
    // SUM's value //
    
    for (i = 0 ; i < lenghtOfSum ; i++) {
        
        sum[i] = num1[i]+num2[i];
        //printf("%d\n",sum[i]);
        
    }
    
    int x;
    
    for (i = 0 ; i < lenghtOfSum ; i++) {
        x = (sum[i]+hand)/10;
        //printf("%d ",hand);
        sum[i] = (sum[i]+hand)%10;
        //printf("%d\n",sum[i]);
        hand = x;
    }
    
    printf("THE SUM IS\n");
    for (i = 0 ; i < lenghtOfSum ; i++) {
        printf("%d", sum[i]);
    }printf("\n");
    
    
    return 0;
}
