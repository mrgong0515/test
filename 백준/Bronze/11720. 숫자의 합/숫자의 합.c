#include <stdio.h>

int main()
{
    int N; // 숫자의 개수 선언
    char A[101];
    
    scanf("%d", &N);
    scanf("%s", A);
    
    int sum = 0;
    
    for(int i = 0; i < N; i++)
    {
        sum += A[i] - '0';
    }
    
    printf("%d", sum);
    
    return 0;
}