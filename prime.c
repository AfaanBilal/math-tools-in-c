/*
 *  Math Tools in C 
 *      PRIME
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int i = 1, sqr = sqrt(n);

    if (n == 1)
        return 0;

    while (++i < sqr)
        if (n % i == 0)
            return 0;

    return 1;	
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%i", &a);

    if (isPrime(a))
        printf("%i is prime.", a);
    else
        printf("%i is not prime.", a);

    getch();
    return 0;
}
