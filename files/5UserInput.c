#include <stdio.h>

int main(){

    // use the scanf function to read user's input

    int age;
    char name[25];

    printf("\nWhat is your name?");
    scanf("%s", &name); // needs this ancor

    printf("\nWhat's your age?");
    scanf("%d", &age);

    printf("\nHello, %s. Your are %d years old!", name, age);


    return 0;
}