#include <stdio.h>

int main(void) {
    int up = 0;
    int down = 0;
    long long int length = 0;
    long long int day = 0;
    int dayMoved = 0;

    scanf("%d %d %lld", &up, &down, &length);

    dayMoved = up - down;

    day = (length - down + dayMoved - 1) / dayMoved;

    printf("%lld", day);
    return 0;
}