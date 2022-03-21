/*
 *  Math Tools in C 
 *      Linear Curve Fitting
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;

    input:

    printf("Enter x1: ");
    scanf("%f", &x1);

    printf("Enter y1: ");
    scanf("%f", &y1);

    printf("Enter x2: ");
    scanf("%f", &x2);

    printf("Enter y2: ");
    scanf("%f", &y2);

    float a, b;
    char sign;

    a = ( y1 - y2 ) / ( x1 - x2 );
    b = ( (x1 * y2) - (y1 * x2) ) / ( x1 - x2 );

    if (x1 == x2) 
    { 
        printf("\n x1 and x2 cannot be same! \n\n");
        goto input;
    }

    if (b >= 0)
        sign = '+';
    else 
    {
        b = abs(b);
        sign = '-';
    }

    printf("Linear Equation: y = ");

    if (a == 0) 
        ; 
    else if (a == 1) 
        printf("x ");
    else if (a == -1)
        printf("-x ");
    else 
        printf("%.0fx ", a);
        
    if (a == 0 && sign == '+' && b != 0)
        printf("%.0f", b);
    else if (a == 0 && sign == '-' && b != 0)
        printf("-%.0f", b);
    else if (a != 0)
        printf("%c %.0f", sign, b);

    getch();
    return 0;
}

