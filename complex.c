/*
 *  Math Tools in C 
 *      COMPLEX NUMBERS
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>
#include <math.h>

typedef struct
{
    double real;
    double imaginary;
} Complex;

Complex add(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

Complex sub(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}

Complex mul(Complex c1, Complex c2)
{
    Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c2.real * c1.imaginary;
    return result;
}

Complex conjugate(Complex c)
{
    Complex result;
    result.real = c.real;
    result.imaginary = -c.imaginary;
    return result;
}

double mod(Complex c)
{
    return sqrt(c.real * c.real + c.imaginary * c.imaginary);
}

Complex inverse(Complex c)
{
    Complex result;
    double md = mod(c);
    result.real = c.real / ( md * md );
    result.imaginary = - ( c.imaginary / ( md * md ) );
    return result;
}


int resolvePowerOfi(int powerOfi)
{
    return powerOfi % 4;
}

void printComplex(Complex c)
{
    if (c.real == (int)c.real)
    {
        printf("%d", (int)c.real);
    }
    else
    {
        printf("%.2lf", c.real);
    }
    
    if (c.imaginary < 0)
    {
        printf(" - ");
        c.imaginary = -c.imaginary;
    }
    else
    {
        printf(" + ");
    }
        
    if (c.imaginary == (int)c.imaginary)
    {
        printf("%di", (int)c.imaginary);
    }
    else
    {
        printf("%.2lfi", c.imaginary);
    }
}

void main()
{
    Complex c1, c2;
    int powerOfi;
    
    printf("Enter the first complex number:\n");
    printf("Real part: ");
    scanf("%lf", &(c1.real)); 
    printf("Imaginary part: ");
    scanf("%lf", &(c1.imaginary));
    printf("Enter the second complex number:\n");
    printf("Real part: ");
    scanf("%lf", &(c2.real)); 
    printf("Imaginary part: ");
    scanf("%lf", &(c2.imaginary));
    printf("Enter a power of i: ");
    scanf("%d", &powerOfi);
        
    printf("\nSUM: ");
    printComplex(add(c1, c2));
    
    printf("\nDIFFERENCE: ");
    printComplex(sub(c1, c2));
    
    printf("\nPRODUCT: ");
    printComplex(mul(c1, c2));
    
    printf("\nCONJUGATE (");
    printComplex(c1);
    printf("): ");
    printComplex(conjugate(c1));
    
    printf("\nCONJUGATE (");
    printComplex(c2);
    printf("): ");
    printComplex(conjugate(c2));
    
    printf("\nINVERSE (");
    printComplex(c1);
    printf("): ");
    printComplex(inverse(c1));
    
    printf("\nINVERSE (");
    printComplex(c2);
    printf("): ");
    printComplex(inverse(c2));
    
    printf("\nMODULUS (");
    printComplex(c1);
    printf("): %.2lf", mod(c1));  
    
    printf("\nMODULUS (");
    printComplex(c2);
    printf("): %.2lf", mod(c2));
    
    printf("\nResolved power of i (%d) : %d", powerOfi, resolvePowerOfi(powerOfi));
    
    getch();    
}
