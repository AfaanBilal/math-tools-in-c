/*
 *  Math Tools in C 
 *      Quadratic Equations
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
    float a, b, c, D, x1, x2;

    printf("Quadratic Equations - Roots Calculator \n");
    printf("General form: ax2 + bx + c = 0 \n");
    printf("Enter the value of a, b, c (space separated): ");

    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D < 0)
        printf("The value of the discriminant is %f < zero, hence no real roots exist.", D);
    else
    {
        printf("The value of the discriminant is %f ", D);
        
        x1 = ( -b + sqrt(D) ) / ( 2 * a );
        x2 = ( -b - sqrt(D) ) / ( 2 * a );
        
        printf("\nThe roots of the equation are %f and %f ", x1, x2);
    }

    getch();
    return 0;
};
