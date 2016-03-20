/*
 *  Math Tools in C 
 *      DECIMAL - BINARY CONVERSION
 *
 *  https://afaan.ml/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://google.com/+AfaanBilal)
 *
 */
 
#include <stdio.h>

unsigned long int power(int a, unsigned int n)
{
    return (n == 0) ? 1 : a * power(a, n - 1);
}

long dec2bin(int decimal)
{
    long binary = 0, i = 1;
    
    while (decimal != 0)
    {
        binary += i * (decimal % 2);
        decimal /= 2;
        i *= 10;
    }
        
    return binary;
}

int bin2dec(long binary)
{
    int decimal = 0, i = 0;
        
    while (binary != 0)
    {
        decimal += (binary % 10) * power(2, i);
        binary /= 10;
        ++i;
    }
    
    return decimal;
}

int main()
{
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("%d in binary: %d", a, dec2bin(a));
    printf("\n%d in decimal: %d", dec2bin(a), bin2dec(dec2bin(a)));
    
    getch();
    return 0;
}
