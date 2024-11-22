#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* now()
{
    time_t time;
    time(&time);
    return asctime(localtime(&time));
}