#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int sum = 0;

    for (int i = 0; i <= 9; i++) {
        sum += i;

        if (numbers[i] >= 0 && numbers[i] <= 9) {
            sum -= numbers[i];
        }
    }
    return sum;
}