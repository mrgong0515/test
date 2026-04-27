#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* s) {
    int answer = 0;
    int numbers[200]; // 숫자를 임시로 저장할 배열 (최대 길이 200 고려)
    int top = 0;      // 배열에 저장된 숫자의 개수 (포인터 역할)
    
    char temp[201];
    strcpy(temp, s);  // 원본 보호를 위해 복사
    
    // 공백을 기준으로 문자열을 읽어오는 입문자용 로직
    char *ptr = strtok(temp, " ");
    while (ptr != NULL) {
        if (strcmp(ptr, "Z") == 0) {
            // "Z"가 나오면 배열에서 마지막에 넣었던 숫자를 제거 (개수를 줄임)
            if (top > 0) {
                top--; 
            }
        } else {
            // 숫자라면 배열에 넣고 개수(top)를 하나 늘림
            numbers[top] = atoi(ptr);
            top++;
        }
        ptr = strtok(NULL, " ");
    }
    
    // 마지막에 배열에 쌓여있는 숫자들만 싹 더하기
    for (int i = 0; i < top; i++) {
        answer += numbers[i];
    }
    
    return answer;
}