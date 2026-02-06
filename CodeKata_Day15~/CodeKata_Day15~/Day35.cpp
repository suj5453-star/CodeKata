#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long needMoney = 0;

    for (int i = 1; i <= count; i++)
    {
        needMoney += price * i;
    }

    if (money >= needMoney) { return 0; }

    answer = needMoney - money;

    return answer;
}