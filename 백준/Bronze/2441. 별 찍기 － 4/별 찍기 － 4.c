#include<stdio.h>

int main(void) {
    int a = 0;
    scanf("%d", &a);
    
    for(int i = 0 ; i < a ; i++) {
        for(int k = a ; k > a-i ; k--) {
                printf(" ");
        }
        
        for(int j = 0 ; j < a-i ; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}