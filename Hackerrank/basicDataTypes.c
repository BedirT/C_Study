#include <stdlib.h>
#include <stdio.h>

int main() {
  
    int i;
    long l;
    long long ll;
    char ch;
    float f;
    double d;

    scanf(" %d", &i);
    printf(" %d\n", i);
    
    scanf(" %ld", &l);
    printf(" %ld\n", l);
     
    scanf(" %lld", &ll);
    printf(" %lld\n", ll);
    
    scanf(" %c", &ch);
    printf(" %c\n", ch);
    
    scanf(" %f", &f);
    printf(" %.2f\n", f);

    scanf(" %lf", &d);
    printf(" %.5lf\n", d);
    return 0;
}
