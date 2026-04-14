#include <stdio.h>

int main()
{
    int board[9][9];
    int max = 0;
    int row = 0, col = 0;
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &board[i][j]);
            
            if(board[i][j] >= max)
            {
                max = board[i][j];
                
                row = i + 1;
                col = j + 1;
            }
        }
    }
    
    printf("%d\n", max);
    printf("%d %d\n", row, col);
    
    return 0;
}