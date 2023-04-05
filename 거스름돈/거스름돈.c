#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money)
{
    int answer = 0;
    int k = 0;
    for (int i = 0; i < price_len; i++)
    {
        k += price[i];
    }
    answer = money - k;
    return answer;
}

int main(void)
{
    int price[4] = { 2100, 3200, 2100, 800 };
    int price_len = sizeof(price)/sizeof(int);
    int money = 10000;
    int answer = 0;
    answer = solution(price, price_len, money);
    printf("%d", answer);
    return 0;
}