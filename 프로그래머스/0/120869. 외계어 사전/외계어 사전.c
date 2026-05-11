#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int spell_count[26] = {0};

    // spell에 들어있는 알파벳 개수 세기
    for (int i = 0; i < spell_len; i++) {
        spell_count[spell[i][0] - 'a']++;
    }

    // dic 단어들을 하나씩 검사
    for (int i = 0; i < dic_len; i++) {
        int dic_count[26] = {0};

        // 단어 길이가 spell_len과 다르면 볼 필요 없음
        if (strlen(dic[i]) != spell_len) {
            continue;
        }

        // dic[i] 단어의 알파벳 개수 세기
        for (int j = 0; j < strlen(dic[i]); j++) {
            dic_count[dic[i][j] - 'a']++;
        }

        // spell_count와 dic_count 비교
        int same = 1;

        for (int k = 0; k < 26; k++) {
            if (spell_count[k] != dic_count[k]) {
                same = 0;
                break;
            }
        }

        // 완전히 같으면 spell로 만들 수 있는 단어임
        if (same == 1) {
            return 1;
        }
    }

    return 2;
}