#include <stdio.h>

int main() {

    // this turns the variable into a constant
    const int x = 10;
    const int y = 5;

    /*

    Operations

     + -> adition
     - -> subtraction
     * -> multiplication
     / -> division
     % -> modulus
     ++ -> increment
     -- -> decrement

    */

    int sum = x + y;

    printf("%d \n", sum);

    // augmented assigment operators 

    int augmented = 5;
    augmented += 5;

    printf("%d", augmented);

}