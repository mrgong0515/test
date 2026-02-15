#include<stdio.h>
int main(void)
{
    int A, B, C;
    scanf("%d %d", &A, &B, &C);
    scanf("%d", &C);
    
    int total = A * 60 + B;
    total += C;
    
    total %= (24 * 60);
    
    printf("%d %d\n", total / 60, total % 60);
    
    return 0;
    
}