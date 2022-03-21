/*
 *  Math Tools in C 
 *      Binomial Expansion
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

unsigned long int power(int a, unsigned int n)
{
    return (n == 0) ? 1 : a * power(a, n - 1);
}

void printBinomialExpansion(int a, int b, unsigned int n)
{
    int r;
    long int result = 0;
    
    printf("\n = ");
    for (r = 0; r <= n; r++)
    {
        printf("%dC%d * %d^%d * %d^%d", n, r, a, n - r, r);
        if (r != n) printf(" + ");
    }
    
    printf("\n = ");
    for (r = 0; r <= n; r++)
    {
        printf("%d * %d * %d", ncr(n, r), power(a, n - r), power(b, r));
        if (r != n) printf(" + ");
    }
        
    printf("\n = ");
    for (r = 0; r <= n; r++)
    {
        result += ncr(n, r) * power(a, n - r) * power(b, r);
        printf("%d", ncr(n, r) * power(a, n - r) * power(b, r));
        if (r != n) printf(" + ");
    }
    
    printf("\n = %d", result);
}

int main()
{
    unsigned int n;
    int a, b;
    
    printf("Enter a, b and n (space separated): ");
    scanf("%d %d %d", &a, &b, &n);
    
    printf("Binomial Expansion for a = %d, b = %d and n = %d : (%d + %d)^%d is \n", a, b, n, a, b, n);
    printBinomialExpansion(a, b, n);
    
    getch();
    return 0;
}
