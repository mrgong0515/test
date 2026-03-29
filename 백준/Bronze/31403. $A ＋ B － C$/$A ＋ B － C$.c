#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    printf("%d\n", A + B - C);
    
    char temp[20];
    sprintf(temp, "%d%d", A, B);
            
    int temp2;
    sscanf(temp, "%d", &temp2);
            
    printf("%d", temp2 - C);            
    
    return 0;
}