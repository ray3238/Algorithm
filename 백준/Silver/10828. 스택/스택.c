#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int topValue = -1;
int s[10000] = { 0, };

void size(void) {
    printf("%d\n", topValue + 1);
}

int empty(void) {
    if (topValue == -1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return (topValue == -1);
}

int is_empty(void) {
    return (topValue == -1);
}

int top(void) {
    if(is_empty()) {
        printf("-1\n");
        return -1;
    } else {
        printf("%d\n", s[topValue]);
        return 1;
    }
}

void push(int item) {
    s[++topValue] = item;
}

int pop(void) {
    if(is_empty()) {
        printf("-1\n");
        return -1;
    } else {
        printf("%d\n", s[topValue]);
        topValue--;
        return 1;
    }
}

int main(void) {
    int n;//첫째 줄에 주어지는 명령의 수 N
    char stack[10];//입력한 문자 넣는 배열 생성
    
    scanf("%d", &n); //명령의 수 입력 받기
    
    int number[100]; //입력한 숫자의 stack 배열 생성
    
    for (int i = 0; i < n; i++) {
        scanf("%s", &stack);
        if (strcmp(stack, "push") == 0) {
            int num;//문자 이후에 포함되어 있는 숫자
            scanf("%d", &num);
            push(num);
        }
        else if (strcmp(stack, "pop") == 0) {
            pop();
        }
        else if (strcmp(stack, "top") == 0) {
            top();
        }
        else if (strcmp(stack, "size") == 0) {
            size();
        }
        else if (strcmp(stack, "empty") == 0) {
            empty();
        }
    }
}