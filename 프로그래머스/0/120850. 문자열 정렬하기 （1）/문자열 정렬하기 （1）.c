#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
    int len = strlen(my_string);
    int* answer = (int*)malloc(sizeof(int) * len);
    int count = 0; 

    for (int i = 0; i < len; i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            answer[count] = my_string[i] - '0';
            count++;
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (answer[j] > answer[j + 1]) {
                int temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    
    return answer;
}