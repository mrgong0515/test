#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare (const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int solution(int numbers[], size_t numbers_len)
{
    qsort(numbers, numbers_len, sizeof(int), compare);
    
    int case1 = numbers[numbers_len - 1] * numbers[numbers_len - 2];
    int case2 = numbers[0] * numbers[1];
    
    return case1 > case2 ? case1 : case2;
}