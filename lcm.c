/*
 *  Math Tools in C 
 *      LCM
 *
 *  https://afaan.ml/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://google.com/+AfaanBilal)
 *
 */
 
 
#include <stdio.h>

int main()
{
    int a, b, LCM;

    printf("Enter the first number  : ");
    scanf("%i", &a);

    printf("Enter the second number : ");
    scanf("%i", &b);

    LCM = (a > b) ? a : b;

    while (1)
    {
        if (LCM % a == 0 && LCM % b == 0)
        {
            printf("The LCM of %i and %i is %i", a, b, LCM);
            
            break;
        }
        else
            LCM++; 
    }

    getch();
    return 0;
}
