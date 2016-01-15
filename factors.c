/*
 *  Math Tools in C 
 *      FACTORS
 *
 *  https://afaan.ml/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://google.com/+AfaanBilal)
 *
 */
 
 
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factors of %d: ", n);
    while (i <= n)
    {
        if (n % i == 0)
            printf("%d ", i);
            
        i++;
    }
        
    getch();
    return 0;
}
