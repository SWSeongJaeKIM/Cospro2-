#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] > ret)
            ret = s[i];
    return ret;
}

int func_b(int s[], int arr_size) {
    int ret = 0;
    for (int i = 0; i < arr_size; ++i)
        ret += s[i];
    return ret;
}

int func_c(int s[], int arr_size) {
    int ret = 101;
    for (int i = 0; i < arr_size; ++i)
        if (s[i] < ret)
            ret = s[i];
    return ret;
}

void main(void)
{
    int scores[5] = { 50, 35, 78, 91, 85 };
    int scores_len = 5
    int sum = 0;

    int sum = func_
        b(scores, scores_len);
    int max_score = func_
        a(scores, scores_len);
    int min_score = func_
        c(scores, scores_len);

    

    sum - max_score - min_score;
    printf("%d", sum);
	 return 0;
}