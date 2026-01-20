#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* phone_number) {
    size_t len = strlen(phone_number);
    char* answer = (char*)malloc(len + 1); // '\0' 자리도 할당

    if (!answer) { return NULL; } // 오류 처리

    if (len >= 4 && len <= 20) {
        for (int i = 0; i < len; i++) {
            if (i < len - 4) {
                answer[i] = '*';
            }
            else if (i >= len - 4) {
                answer[i] = phone_number[i];
            }
        }
        answer[len] = '\0';
    }
    return answer;
}