/*
 *  Math Tools in C 
 *      FACTORIAL
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

unsigned long int factorial(unsigned int n)
{
	return (n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
    unsigned int a;

    printf("Input a number: ");
    scanf("%i", &a);

    printf("Factorial of %i is %i", a, factorial(a));

    getch();
    return 0;
}
