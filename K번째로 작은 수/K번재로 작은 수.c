#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_row_len은 2차원 배열 arr의 행(세로) 길이입니다.
// arr_col_len은 2차원 배열 arr의 열(가로) 길이입니다.
// arr[i][j]는 arr의 i번째 행의 j번째 열에 저장된 값을 의미합니다.

void sort(int array[], int size)
{	
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size - 1 - i; j++) 
        {
            int temp = 0;
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[4][4] = { {5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21} };
    int arr_row_len = 4;
    int arr_col_len = 4;
    int k = 4;
    int answer = 0;

    int* array = (int*)malloc(sizeof(int) * (arr_row_len * 4));
    int cnt = 0;
    for (int i = 0; i < arr_row_len; i++)
    {	// 2차원 배열 1차원 배열에 넣어 
        for (int j = 0; j < arr_col_len; j++)
        {
            array[cnt++] = arr[i][j];
        }
    }
    sort(array, arr_row_len * 4);
    answer = array[k - 1];
    printf("%d", answer);
    return 0;
}