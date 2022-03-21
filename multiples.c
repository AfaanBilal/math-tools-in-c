/*
 *  Math Tools in C 
 *      MULTIPLES
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

int main()
{
    int a, n, i = 1;	

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter the number of multiples required: ");
    scanf("%d", &n);

    printf("%d multiples of %d :", n, a);
    while(i <= n)
    {
        printf("\n %d x %d = %d", a, i, a * i);
        i++;
    }

    getch();
    return 0;
}
