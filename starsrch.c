// starsrch.c -- use strncmp()
#include<stdio.h>
#include<string.h>
#define LISTSIZE 4

int main()
{
    const char *list[LISTSIZE] = {
        "astronomy", "astouding", "astrophysice", "astracize"
    };
    int count = 0;
    int i;

    for(i = 0; i < LISTSIZE; i++ )
        if(strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    printf("The list contained %d words beginning with astro.\n", count);

    return 0;
}