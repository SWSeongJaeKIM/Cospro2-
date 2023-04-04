#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main(void)
 {
    int stones[6] = { 2, 5, 1, 3, 2, 1 };
    int stones_len = 6;
    int cnt = 0;
    int current = 0;
    while (
        stones_len > current
        ) {
        current +=
            stones[current]
            ;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}