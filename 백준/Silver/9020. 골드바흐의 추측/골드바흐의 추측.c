#include <stdio.h>
#define MAX_N 10000

int is_prime[MAX_N + 1];

int main() {
    int T, n;
    // 에라토스테네스의 체 알고리즘을 이용하여 소수를 구함
    for (int i = 2; i <= MAX_N; i++) {
        is_prime[i] = 1; // 모두 소수로 초기화
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) { // i가 소수라면
            for (int j = i * 2; j <= MAX_N; j += i) { // i의 배수들을 모두 소수에서 제외
                is_prime[j] = 0;
            }
        }
    }

    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = n / 2; i >= 2; i--) { // n의 절반부터 시작하여 소수를 찾음
            if (is_prime[i] && is_prime[n - i]) { // i와 n-i가 모두 소수라면
                printf("%d %d\n", i, n - i); // 골드바흐 파티션 출력
                break;
            }
        }
    }
    return 0;
}
