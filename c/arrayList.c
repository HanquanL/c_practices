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

bool insertArrayList(ArrayList *list, int index, int value)
{
    if (list->size >= 100)
    {
        printf("The ArrayList is full!\n");
        return false;
    }
    if (index < 0 || index > list->size)
    {
        printf("invalid index!\n");
        return false;
    }
    for (int i = list->size; i > index; i--)
    {
        list->data[i] = list->data[i - 1];
    }

    list->data[index] = value;
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

    insertArrayList(&list, 1, 99);
    printArrayList(&list);

    insertArrayList(&list, 0, 5);
    printArrayList(&list);

    insertArrayList(&list, list.size, 777);
    printArrayList(&list);

    insertArrayList(&list, 10, 10);
    insertArrayList(&list, 0, 10);

    return 0;
}