#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j;
    int minIndex;
    int temp;

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])     //가장 작은 인덱스를 찾는다
            {
                minIndex = j;
            }
        }

        temp = arr[i];      //정렬이 끝나지 않은 인덱스 중 가장 앞 인덱스는 temp
        arr[i] = arr[minIndex];     //정렬이 끝나지 않은 인덱스 중 가장 앞 인덱스를 이번에 찾은 가장 작은 값으로 바꿈
        arr[minIndex] = temp;       //미리 저장해 놓은 temp값으로 빈 자리를 채워 교환형식을 구현
    }
}

int main(void)
{
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
