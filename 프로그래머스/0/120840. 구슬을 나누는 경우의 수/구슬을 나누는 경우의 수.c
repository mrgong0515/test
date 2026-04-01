#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    if (share == 0 || balls == share) {
        return 1;
    }
    
 
    return solution(balls - 1, share - 1) + solution(balls - 1, share);
}