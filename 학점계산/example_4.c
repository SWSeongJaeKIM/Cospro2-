#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main (void)
{
    int scores[5] = { 86, 72, 98, 60, 45 };
    int scores_len = 5;
    int* grade_counter = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; ++i)
        grade_counter[i] = 0;

    for (int i = 0; i < scores_len; ++i)
    {
        if (
            scores[i] >= 85 && scores[i] <= 100
            )
            grade_counter[0] += 1;
        else if (
            scores[i] >= 70 && scores[i] <= 84
            )
            grade_counter[1] += 1;
        else if (
            scores[i] >= 55 && scores[i] <= 69
            )
            grade_counter[2] += 1;
        else if (
            scores[i] >= 40 && scores[i] <= 54
            )
            grade_counter[3] += 1;
        else
            grade_counter[4] += 1;
    }
    printf("%d,%d,%d,%d,%d,", grade_counter[0], grade_counter[1], grade_counter[2], grade_counter[3], grade_counter[4]);
    return 0;
}