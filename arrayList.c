#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int data[100];
    int size;
} ArrayList;

void initArrayList(ArrayList *list)
{
    list->size = 0;
}

void printArrayList(const ArrayList *list)
{
    printf("[ ");
    for (int i = 0; i < list->size; i++)
    {
        printf("%d", list->data[i]);
        if (i < list->size - 1)
        {
            printf(", ");
        }
    }
    printf(" ]\n");
}

bool appendArrayList(ArrayList *list, int value)
{
    if (list->size >= 100)
    {
        return false;
    }
    list->data[list->size] = value;
    list->size++;
    return true;
}

int main(void)
{
    ArrayList list;

    initArrayList(&list);
    printArrayList(&list);

    appendArrayList(&list, 1);
    appendArrayList(&list, 2);
    appendArrayList(&list, 3);
    printArrayList(&list);

    return 0;
}