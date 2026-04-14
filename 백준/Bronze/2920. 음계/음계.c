#include <stdio.h>

int main()
{
    int nums[8];
    int up = 0; //오름차순 확인할 카운트 변수
    int down = 0; // 내림차순 확인할 카운트 변수
    
    // 8개 음계 숫자 입력받기
    for(int i = 0; i < 8; i++)
        scanf("%d", &nums[i]);
    
    // 숫자 흐름 분석하기
    // 배열의 0번부터 7번까지
    for(int i = 0; i < 7; i++)
    {
        // 현재 숫자보다 다음 숫자가 더 크면 오름차순 후보
        if(nums[i] < nums[i + 1])
        {
            up++;
        }
        
        // 현재 숫자보다 다음 숫자가 더 작으면 내림차순 후보
        else if(nums[i] > nums[i + 1])
        {
            down++;
        }
    }
    
    // 분석 결과 출력하기
    if(up == 7)
    {
        printf("ascending\n");
    }
    
    else if(down == 7)
    {
        printf("descending\n");
    }
    
    else
    {
        printf("mixed\n");
    }
    
    return 0;
}