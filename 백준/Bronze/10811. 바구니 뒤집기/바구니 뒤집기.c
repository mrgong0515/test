#include <stdio.h>

int main(void)
{
    int N, M; // 바구니 갯수, 명령 횟수
    int basket[101]; // 바구니 배열 지정
    
    scanf("%d %d", &N, &M); // N, M 입력 받기
    
    for(int i = 1; i <= N; i++) // 바구니 갯수 초기화
    {
        basket[i] = i;
    }
    
    for(int k = 0; k < M; k++)    // M번 만큼 뒤집기 명령 수행
    {
        int start, end;    // i,j대신 start와 end로 시작점과 끝점 구분 변수 지정
        scanf("%d %d", &start, &end);
    
        while (start < end)    // 뒤집기 핵심 로직
        {
            int temp = basket[start];
            basket[start] = basket[end];
            basket[end] = temp;
        
            start++;    // 시작점 오른쪽으로 한 칸 ++
            end--;      // 끝점 왼쪽으로 한 칸 --
        }
    }
    
    for(int i = 1; i <= N; i++) // 최종결과 출력
    {
        printf("%d ", basket[i]);
    }
    
    return 0;
}