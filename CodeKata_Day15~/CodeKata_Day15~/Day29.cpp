#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(3);
    int arrSize = strlen(s);

    if (arrSize % 2 == 0)
    {
        char firstCharNum = (arrSize / 2) - 1;
        char secondCharNum = arrSize / 2;

        answer[0] = s[firstCharNum];
        answer[1] = s[secondCharNum];
        answer[2] = '\0';
    }
    else
    {
        answer[0] = s[arrSize /= 2];
        answer[1] = '\0';
    }

    return answer;
}