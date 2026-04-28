#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    // 결과가 들어갈 공간을 넉넉하게 만듭니다.
    char* answer = (char*)malloc(len + 1);
    int index = 0; // answer에 글자를 채워넣을 위치

    for (int i = 0; i < len; i++) {
        int word = 0; // 중복인지 확인하는 깃발 (0: 새 글자, 1: 중복)

        // 현재 글자(my_string[i])가 이전에 나온 적이 있는지 처음부터 검사합니다.
        for (int j = 0; j < i; j++) {
            if (my_string[i] == my_string[j]) {
                word = 1; // 똑같은 글자를 찾았다면 깃발을 올립니다.
                break; // 더 이상 찾을 필요 없으니 안쪽 반복문을 나갑니다.
            }
        }

        // 중복이 아니라면(깃발이 0이라면) 결과에 추가합니다.
        if (word == 0) {
            answer[index] = my_string[i];
            index++;
        }
    }

    // C언어 문자열의 끝은 항상 '\0'으로 마무리해야 합니다.
    answer[index] = '\0';
    
    return answer;
}