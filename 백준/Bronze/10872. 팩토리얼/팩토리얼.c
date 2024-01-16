#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a;
    int sum = 1;
    
    scanf("%d", &a);
    
    for( int i = a ; i >= 1 ; i--) {
        sum *= i;
    }
    
    if (a == 0) {
        printf("1");
    } else {
        printf("%d", sum);
    }
    return 0;
}
