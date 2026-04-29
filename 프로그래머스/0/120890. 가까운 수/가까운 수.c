#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // abs 함수 사용을 위해서

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = array[0];
    int min_dif = abs(n - array[0]);
    
    for(size_t i = 1; i < array_len; i++){
        int now_dif = abs(n - array[i]);
        
        if(now_dif < min_dif){
            min_dif = now_dif;
            answer = array[i];
        }
        
        else if(now_dif == min_dif){
            if(array[i] < answer){
                answer = array[i];
            }
        }
    }
    
    return answer;
}