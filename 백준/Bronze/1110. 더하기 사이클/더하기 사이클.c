#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int input = 0;
    int num1 = 0;
    int num2 = 0;
    int value = 0;
    int result = 0;
    int firstTry = false;
    int count = 0;

    scanf("%d", &input);

    while (1) {
        if(!firstTry) {
            num1 = input / 10;
            num2 = input % 10;

            if ((num1 + num2) / 10 != 0) {
                value = (num1 + num2) % 10;
            } else {
                value = num1 + num2;
            }

            result = num2 * 10 + value;
            firstTry = true;
            count++;
        } else {
            num1 = result / 10;
            num2 = result % 10;

            if ((num1 + num2) / 10 != 0) {
                value = (num1 + num2) % 10;
            } else {
                value = num1 + num2;
            }

            result = num2 * 10 + value;
            count++;
        }

        if (result == input) {
            break;
        }
    }

    printf("%d", count);

    return 0;
}
