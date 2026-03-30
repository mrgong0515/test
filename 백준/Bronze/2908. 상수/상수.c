#include <stdio.h>

int reverse(int N) // 숫자 뒤집는 함수
{
    return (N % 10) * 100 + ((N / 10) % 10) * 10 + (N / 100);
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    
    a = reverse(a);
    b = reverse(b);
    
    printf("%d", a > b ? a : b); // 더 큰 수 출력
    
    return 0;
}