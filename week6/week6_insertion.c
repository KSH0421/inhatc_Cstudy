#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j;
    int key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];

        j = i - 1;      //j는 i보다 한 칸 앞 인덱스부터 시작

        while (j >= 0 && arr[j] > key)      //key보다 앞 인덱스가 key보다 크면 j값을 줄이며 더 앞 인덱스와 비교해나간다
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;       //key가 자신보다 작은 값을 만났을때 그 뒤 인덱스를 key값으로 한다
    }
}

int main(void)
{
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
