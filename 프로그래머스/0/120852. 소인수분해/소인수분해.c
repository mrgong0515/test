#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(sizeof(int) * 100);
    int count = 0;

    for (int i = 2; i <= n; i++) {
        // n이 i로 나누어 떨어진다면 i는 소인수
        if (n % i == 0) {
            answer[count++] = i;
            
            // i로 더 이상 나누어지지 않을 때까지 나누어 중복을 제거
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    
    return answer;
}
