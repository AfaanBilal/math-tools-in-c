/*
 *  Math Tools in C 
 *      nPr
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

unsigned long int npr(unsigned int n, unsigned int r)
{
    return factorial(n) / factorial(n - r);
}

int main()
{
    unsigned int n, r;
    
    printf("Enter n and r (space separated): ");
    scanf("%d %d", &n, &r);
    
    printf("nPr for n = %d and r = %d is %d", n, r, npr(n, r));
    
    getch();
    return 0;
}
