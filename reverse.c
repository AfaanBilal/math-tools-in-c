/*
 *  Math Tools in C 
 *      REVERSE
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

int reverse(int n)
{
    int r = 0;
    
    while (n > 0)
    {
        r = 10 * r + (n % 10);
        n /= 10;
    }
    
    return r;
}

int main()
{
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("Reverse of %d is %d", a, reverse(a));
    
    getch();
    return 0;
}
