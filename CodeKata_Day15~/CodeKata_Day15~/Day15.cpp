#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    //n%x == 1인 가장 작은 자연수
    // --> 하나 나오면 함수가 끝나야 함

    for (int x = 2; x < n; x++)
    {
        if (n % x == 1)
        {
            answer = x;
            break;
        }
    }
    return answer;
}