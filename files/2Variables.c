#include <stdio.h>

/*
    Variables are allocated space in memory to store a value.
    We refer to variable'sa name to access the stored value.
    In C we need to declare what type of data each variable will store.

*/

int main() {

    // STEPS WHILE USING VARIABLES
    int x; // declaration
    x = 10; // initialization
    int y =  5; // declaration + initialization

    // TYPES OF DATA
    int age = 23; // Integer
    float gpa = 2.05; // Floating point number
    char grade = 'C'; // Single character
    char name[] = "Daniella"; // Array of chars

    /* NOTE: Since C is not an object oriented language it cannot 
    stores ´strings´, as strings are objects. So, instead, we create
    an array of characters
    */

    // INTERPOLATION
    printf("Hello %s \n", name);
    printf("You are %d years old", age); // placeholder for decimal

    return 0;
}