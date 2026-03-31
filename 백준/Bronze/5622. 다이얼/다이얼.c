#include <stdio.h>
#include <string.h>

int main()
{
    char word[16];
    scanf("%s", word);
    
    int total_time = 0; // 총 걸리는 시간 변수
    int len = strlen(word); // 문자열 길이 계산
    
    for(int i = 0; i < len; i++)
    {
        char c = word[i]; // 현재 검사 중인 문자
        
        if(c >= 'A' && c <= 'C')
            total_time += 3; // ABC -> 숫자 2 (3초)
        else if(c >= 'D' && c <= 'F')
            total_time += 4; // DEF -> 숫자 3 (4초)
        else if(c >= 'G' && c <= 'I')
            total_time += 5; // GHI -> 숫자 4 (5초)
        else if(c >= 'J' && c <= 'L')
            total_time += 6; // JKL -> 숫자 5 (6초)
        else if(c >= 'M' && c <= 'O')
            total_time += 7; // MNO -> 숫자 6 (7초)
        else if(c >= 'P' && c <= 'S')
            total_time += 8; // PQRS -> 숫자 7 (8초)
        else if(c >= 'T' && c <= 'V')
            total_time += 9; // TUV -> 숫자 8 (9초)
        else if(c >= 'W' && c <= 'Z')
            total_time += 10; // WXYZ -> 숫자 9 (10초)
    }
            
    printf("%d\n", total_time);
            
    return 0;
}