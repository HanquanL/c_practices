#include <stdio.h>

int main(void)
{
    int arr[6] = {0, 1, 3, 4, 5};
    int size = 5;
    int index = 2;
    int value = 2;
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    size++;

    for (int i = 0; i < size; i++)
    {
        printf("index: %d , value: %d.\n", i, arr[i]);
    }

    return 0;
}