#include<stdio.h>

int main(void){
    int age;
    float asseets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &asseets); // use the & here
    scanf("%s", pet);
    printf("%d $%2f %s\n", age, asseets, pet);
}