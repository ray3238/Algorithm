#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    char str1[100000];
    char str2[100000];

    while(scanf("%s %s", str1, str2) != EOF) {
        int strNum = 0;
        for (unsigned long i = 0 ; i < strlen(str2) ; i++) {
            if (str1[strNum] == str2[i]) {
                strNum++;
            }
        }
        if (strNum == strlen(str1))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}