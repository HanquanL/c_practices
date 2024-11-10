// echo.c -- repeats input
#include <stdio.h>
int main()
{
    char ch;
    while((ch = getchar()) != '#')
        putchar(ch);
    return 0;
}