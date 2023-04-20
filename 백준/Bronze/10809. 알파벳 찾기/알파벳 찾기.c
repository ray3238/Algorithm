#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int index[26]; // 알파벳의 등장 위치를 저장할 배열

    scanf("%s", str);
    memset(index, -1, sizeof(index)); // index 배열의 모든 값을 -1로 초기화

    for (int i = 0; i < strlen(str); i++)
    {
        int c = str[i] - 'a'; // 현재 문자의 인덱스 계산
        if (index[c] == -1) // 이전에 등장한 적 없는 알파벳인 경우
            index[c] = i; // 해당 알파벳의 등장 위치 저장
    }

    for (int i = 0; i < 26; i++)
        printf("%d ", index[i]);

    return 0;
}
