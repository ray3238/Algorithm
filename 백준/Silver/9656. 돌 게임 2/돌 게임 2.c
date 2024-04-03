#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int stoneCount = 0;
    scanf("%d", &stoneCount);
    if(stoneCount % 2 == 0) {
        printf("SK");
    } else {
        printf("CY");
    }
    return 0;
}