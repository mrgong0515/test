#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 0;
    
    int width_count = box[0] / n;
    int length_count = box[1] / n;
    int height_count = box[2] / n;
    
    answer = width_count * length_count * height_count;
    
    return answer;
}