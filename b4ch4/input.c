//input.c -- when to use &
#include <stdio.h>
int main()
{
    int age; //variable
    float assets; //variable
    char pet[30]; //string
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets); //use & to assign the value to the variable
    scanf("%s", pet); //no need to use & for string
    printf("%d $%.2f %s\n", age, assets, pet);
    return 0;
}