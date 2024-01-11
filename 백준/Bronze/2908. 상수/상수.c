#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int changeNumber(int a) {
    int firstNum, secondNum, thirdNum;
    char string[50];
    
    firstNum = a % 10;
    secondNum = a / 10 - (a / 100)*10;
    thirdNum = a / 100;

    sprintf(string, "%d%d%d", firstNum, secondNum, thirdNum);
    return atoi(string);
}

int main(void) {
    int num1, num2;
    int changeNum1 = 0, changeNum2 = 0;
    scanf("%d %d", &num1, &num2);
    
    changeNum1 = changeNumber(num1);
    changeNum2 = changeNumber(num2);
    
    if (changeNum1 > changeNum2) {
        printf("%d", changeNum1);
    } else {
        printf("%d", changeNum2);
    }
    return 0;
}
