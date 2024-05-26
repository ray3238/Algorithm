#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    for(int i = 0 ; i < array_len ; i++) {
        while(array[i] != 0) {
            if(array[i] % 10 == 7) answer++;
            array[i] = array[i] / 10;
        }
    }
    return answer;
}