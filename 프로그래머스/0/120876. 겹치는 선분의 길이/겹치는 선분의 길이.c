#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lines_rows는 2차원 배열 lines의 행 길이, lines_cols는 2차원 배열 lines의 열 길이입니다.
int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    // -100 부터 100까지의 숫자선을 표현하기 위한 배열
    // 배열 인덱스는 음수를 쓸 수 없으므로 +100
    int count[201] = {0};
    
    // 선분 3개 하나씩 확인
    for(int i = 0; i < lines_rows; i++) {
        int start = lines[i][0];    // i번째 선분 시작점
        int end = lines[i][1];      //   " " 끝점
        
        // start부터 end 바로 전 까지 체크
        for(int j = start; j < end; j++) {
            // j가 음수일 수 있으므로 +100 후 배열 인덱스로 사용
            count[j+100]++;
        }
    }
    
    int answer = 0;
    
    // 전체 숫자선 확인
    for(int i = 0; i < 201; i++) {
        // 칸을 2개 이상의 선분이 지나가면 그 부분이 겹친 부분
        if(count[i] >= 2) {
            answer++;
        }
    }
    
    return answer;
}