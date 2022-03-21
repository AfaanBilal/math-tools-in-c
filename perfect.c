/*
 *  Math Tools in C 
 *      PERFECT NUMBER
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

int isPerfect(int n)
{
    int i = 0, sum = 0;

    while ( ++i < n )
        if (n % i == 0)
            sum += i;
                    
    return sum == n;
}

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%i", &x);

    if (isPerfect(x))
        printf("%i is a perfect number.", x);
    else
        printf("%i is not a perfect number.", x);

    getch();
    return 0;
}
