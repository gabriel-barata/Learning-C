#include <stdio.h>
#include <stdbool.h> // needed to work w/ booleans in C


/*
    The type of data you declare on you're variable 
    basically defines the allocated space in memory
    for that variable
*/

int main(){

    // literals
    char a = 'A';                   // single character [%c]
    char b[] = "Anything";          // array of characters [%s]

    // numerics
    float pi = 3.141592;            // 4 bytes (32 bits of precision) 6/7 digits [%f]
    double pi2 = 3.141592653589;    // 8 bytes (32 bits of precision) 15/16 digits [%lf]

    bool e = True;                  // 1 byte (True or False) [%d]

    char f = 100;                   // 1 byte (-128 to 128) [%d] or [%c]
    unsigned char e                 /* 1 byte (0 to 255) [%d] or [%c]
                                                ONLY POSITIVE VALUES*/
    short int g;                    // 2 byte (-32,768 to 32,768) [%d]
    unsigned short int h;           // 2 byte (0 to 65,535) [%d]
    int i;                          // 4 bytes (-2,147,483,648 to 2,147,483,648) [%d]
    unsigned int j;                 // the same idea that the past unsigned values

    long long int k;                // a very very long integer
    unsigned long long intl;        // a very very long integer that accepts only positive values
    

    return 0;
}