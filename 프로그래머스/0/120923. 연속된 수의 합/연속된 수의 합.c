#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * num);
    
    // 0 부터 (num - 1)까지의 합을 구한다
    int a = (num - 1) * num / 2;
    
    // 수열의 시작값 계산
    int start_num = (total - a) / num;
    
    // 시작값부터 1씩 증가
    for(int i = 0; i < num; i++){
        answer[i] = start_num + i;
    }
    
    return answer;
}