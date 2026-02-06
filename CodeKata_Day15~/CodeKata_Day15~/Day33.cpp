#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char tmp;
    char* answer = (char*)malloc(strlen(s) + 1);

    strcpy(answer, s);

    for (int i = 1; i < strlen(s); i++) 
    {
        int j;
        tmp = answer[i];

        for (j = i; j > 0 && answer[j - 1] < tmp; j--)
        {
            answer[j] = answer[j - 1];
        }
        answer[j] = tmp;
    }
    answer[strlen(s) + 1] = '\0';

    return answer;
}