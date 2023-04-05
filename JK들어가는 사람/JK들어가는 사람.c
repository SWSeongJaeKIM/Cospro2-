#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* name_list[], int name_list_len) {
    int answer = 0;
    for (int i = 0; i < name_list_len; ++i)
        for (int j = 0; name_list[i][j] != 0; ++j)
            if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
                answer++;
                break;
            }
    return answer;
}

int main(void)
{
    char* name_list[4] = {"james", "luke", "oliver", "jack"};
    int name_list_len = 4;
    int answer = 0;

    answer = solution(name_list, name_list_len);
    printf("%d", answer);

    return 0;
}