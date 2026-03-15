#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);

    char* answer = (char*)malloc(len + 1); 

    for (int i = 0; i < len; i++) {
        if (my_string[i] >= 'A' && my_string[i] <= 'Z') {
            answer[i] = my_string[i] + 32;
        } else {
            answer[i] = my_string[i];
        }
    }
    answer[len] = '\0';

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (answer[j] > answer[j + 1]) {
                char temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }

    return answer;
}