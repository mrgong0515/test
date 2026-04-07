#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    // (k-1)번 동안 2칸씩 이동한 인덱스를 계산합니다.
    // 인원수로 나눈 나머지를 구하면 한 바퀴를 돌아도 정확한 위치가 나옵니다.
    int index = ((k - 1) * 2) % numbers_len;
    
    return numbers[index];
}
