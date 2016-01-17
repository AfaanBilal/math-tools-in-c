/*
 *  Math Tools in C 
 *      FACTORIAL
 *
 *  https://afaan.ml/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://google.com/+AfaanBilal)
 *
 */
 

#include <stdio.h>

long int factorial(int n)
{
	return (n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
    int a;

    printf("Input a number: ");
    scanf("%i", &a);

    printf("Factorial of %i is %i", a, factorial(a));

    getch();
    return 0;
}
