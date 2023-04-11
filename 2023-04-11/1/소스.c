#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int socks[], int sockslen)
{
	int answer = 0;
	

	int* count = (int*)malloc(sizeof(int), 10);
	memset(count, 0, 10 * sizeof(int));

	for (int i = 0; i < sockslen; i++)
		count[socks[i]]++;


		for (int i = 0; i < 10; i++)
			answer += count[i]/2;

			return answer;
}

int main()
{
	int socks[] = { 1, 2, 1, 3, 2, 1 };
	int socks_len = 6;
	int ret = solution(socks, socks_len);

	printf("solution 함수는의 반환 값은 %d 입니다 \n", ret);
}