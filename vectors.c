/*
 *  Math Tools in C 
 *      VECTORS
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
    double x;
    double y;
    double z;
} Vector;

void printVector(Vector v)
{
    if (v.x != 0)
    {
        if (v.x == (int)v.x)
        {
            printf("%di", (int)v.x);
        }
        else
        {
            printf("%.2lfi", v.x);            
        }
    }
    
    if (v.y == 0)
        ;
    else if (v.y < 0)
    {
        printf(" - ");
        v.y = -v.y;
    }
    else
    {
        printf(" + ");
    }
    
    if (v.y == 0)
        ;
    else if (v.y == (int)v.y)
    {
        printf("%dj", (int)v.y);
    }
    else
    {
        printf("%.2lfj", v.y);
    }
    
    
    if (v.z == 0)
        ;
    else if (v.z < 0)
    {
        printf(" - ");
        v.z = -v.z;
    }
    else
    {
        printf(" + ");
    }
    
    if (v.z == 0)
        ;
    else if (v.z == (int)v.z)
    {
        printf("%dk", (int)v.z);
    }
    else
    {
        printf("%.2lfk", v.z);
    }
}

double mod(Vector v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

Vector add(Vector v1, Vector v2)
{
    Vector resultant;
    resultant.x = v1.x + v2.x;
    resultant.y = v1.y + v2.y;
    resultant.z = v1.z + v2.z;
    return resultant;
}

Vector sub(Vector v1, Vector v2)
{
    Vector resultant;
    resultant.x = v1.x - v2.x;
    resultant.y = v1.y - v2.y;
    resultant.z = v1.z - v2.z;
    return resultant;
}

double dotProduct(Vector v1, Vector v2)
{
    return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);    
}

Vector crossProduct(Vector v1, Vector v2)
{
    Vector resultant;
    resultant.x = v1.y * v2.z - v2.y * v1.z;
    resultant.y = v2.x * v1.z - v1.x * v2.z;
    resultant.z = v1.x * v2.y - v2.x * v1.y;     
    return resultant;
}

int main()
{
    Vector v1, v2;
    
    printf("Enter the first vector:\n");
    printf("x-component: ");
    scanf("%lf", &(v1.x));
    
    printf("y-component: ");
    scanf("%lf", &(v1.y));
    
    printf("z-component: ");
    scanf("%lf", &(v1.z));
    
    printf("Enter the second vector:\n");
    printf("x-component: ");
    scanf("%lf", &(v2.x));
    
    printf("y-component: ");
    scanf("%lf", &(v2.y));
    
    printf("z-component: ");
    scanf("%lf", &(v2.z));
    
    printf("\nSUM: ");
    printVector(add(v1, v2));
    
    printf("\nDIFF: ");
    printVector(sub(v1, v2));
    
    printf("\nMOD (");
    printVector(v1);
    printf(") : %.2lf", mod(v1));
    
    printf("\nMOD (");
    printVector(v2);
    printf(") : %.2lf", mod(v2));
    
    printf("\nDOT PODUCT: %.2lf", dotProduct(v1, v2));
    
    printf("\nCROSS PRODUCT: ");
    printVector(crossProduct(v1, v2));
    
    getch();
}
