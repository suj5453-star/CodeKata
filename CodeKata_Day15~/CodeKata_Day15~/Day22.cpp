#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int count = 0;

    if (num == 1) {
        return 0;
    }

    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
            count++;
        }
        else {
            num *= 3;
            num += 1;
            count++;
        }
        if (count > 500) {
            return -1;
        }
    }
    return count;
}