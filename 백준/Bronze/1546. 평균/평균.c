#include <stdio.h>

int main(void)
{
    int N; // 과목 수
    scanf("%d", &N); 
    
    int score;      // 각 점수를 임시로 담을 변수
    int max = 0;    // 최댓값 (0으로 초기화)
    double sum = 0; // 합계 (소수점 계산을 위해 double 사용)
    
    for(int i = 0; i < N; i++)    // N번 반복하며 점수 입력 및 최댓값/합계 구하기
    {
        scanf("%d", &score);
        
        sum += score; // 점수 합치기
        
        if(score > max) // 최대값 찾기
        {
            max = score;
        }
    }
    
    // 새로운 평균 계산 및 출력
    // 공식: (합계 / 최댓값 * 100) / 과목수
    double avg = (sum / max * 100) / N;
    
    // 소수점 아래까지 출력하기 위해 %f 사용
    printf("%.2f\n", avg);
    
    return 0;
}