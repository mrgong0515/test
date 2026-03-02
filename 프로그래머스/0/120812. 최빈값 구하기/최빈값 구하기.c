#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int count[1000] = {0};
    int maxcount = 0;
    int mode = -1;
    
    for (size_t i = 0; i < array_len; i++)
    {
        int value = array[i];
        count[value]++;
        
        if (count[value] > maxcount)
        {
            maxcount = count[value];
        }
    }
    
    int modecount = 0;
    
    for (int i = 0; i < 1000; i++)
    {
        if (count[i] == maxcount)
        {
            mode = i;
            modecount++;
        }
    }
    
    if (modecount > 1)
        return -1;
    
    return mode;
}