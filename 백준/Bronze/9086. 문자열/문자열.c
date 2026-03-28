#include <stdio.h>
#include <string.h>

int main()
{
    int T; // 테스트 케이스 개수 선언
    scanf("%d", &T);
    
    for(int i = 1; i <= T; i++)
    {
        char word[1001];
        scanf("%s", word);
        
        int len = strlen(word);
        printf("%c%c\n", word[0], word[len - 1]);
    }
    
      return 0;  
}