#include<stdio.h>

int main(void) {
    char list[5][15] = {0, };

    for (int i = 0 ; i < 5; i++) {
        scanf("%s", &list[i]);
    }

    for(int i = 0 ; i < 15 ; i++) {
        for(int j = 0 ; j < 5 ; j++) {
            if (list[j][i] != '\0'){
                printf("%c", list[j][i]);
            }
        }
    }

    return  0;
}