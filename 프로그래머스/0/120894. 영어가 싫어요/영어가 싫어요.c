#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(const char* numbers) {
    long long answer = 0;
    int i = 0;
    
    while(numbers[i] != '\0'){
        switch (numbers[i]) {
            case 'z': // zero (4글자)
                answer = answer * 10 + 0;
                i += 4;
                break;
                
            case 'o': // one (3글자)
                answer = answer * 10 + 1;
                i += 3;
                break;
                
            case 't': // two(3) & three(5)
                if(numbers[i + 1] == 'w') {
                    answer = answer * 10 + 2; 
                    i += 3;
                } else {
                    answer = answer * 10 + 3;
                    i += 5;
                }
                break;
                
            case 'f': // four(4) & five(4)
                if(numbers[i + 1] == 'o'){
                    answer = answer * 10 + 4;
                    i += 4;
                } else {
                    answer = answer * 10 + 5;
                    i += 4; 
                }
                break;
                
            case 's': // six(3) & seven(5)
                if(numbers[i + 1] == 'i'){
                    answer = answer * 10 + 6;
                    i += 3; 
                } else {
                    answer = answer * 10 + 7;
                    i += 5; 
                }
                break;
                
            case 'e': // eight (5글자)
                answer = answer * 10 + 8;
                i += 5; 
                break;
                
            case 'n': // nine (4글자)
                answer = answer * 10 + 9;
                i += 4; 
                break;
                
            default:
                i++; 
                break;
        }
    }
    
    return answer;
}