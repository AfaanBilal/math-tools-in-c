/*
 *  Math Tools in C 
 *      nCr
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

unsigned long int ncr(unsigned int n, unsigned int r)
{
    return factorial(n) / ( factorial(n - r) * factorial(r) );
}

int main()
{
    unsigned int n, r;
    
    printf("Enter n and r (space separated): ");
    scanf("%d %d", &n, &r);
    
    printf("nCr for n = %d and r = %d is %d", n, r, ncr(n, r));
    
    getch();
    return 0;
}
