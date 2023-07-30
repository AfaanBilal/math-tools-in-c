/*
 *  Math Tools in C
 *      Increment
 *
 *  https://afaan.dev/math-tools-in-c
 *
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

int main()
{
    unsigned int x = 0;

    printf("x = %d\n", x);

    x = x + 1;

    printf("x = %d\n", x);

    x += 1;

    printf("x = %d\n", x);

    x++;

    printf("x = %d\n", x);

    x = x - -1;

    printf("x = %d\n", x);

    x -= -1;

    printf("x = %d\n", x);

    return 0;
}
