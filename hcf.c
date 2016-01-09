/*
 *  Math Tools in C 
 *      HCF (or GCD)
 *
 *  https://afaan.ml/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://google.com/+AfaanBilal)
 *
 */
 
 
#include <stdio.h>

int main()
{
    int a, b, r, orgA, orgB, HCF;
	
    printf("Enter the first number  : ");
    scanf("%i", &orgA);
	
    printf("Enter the second number : ");
    scanf("%i", &orgB);

	if (orgA > orgB)
	{
		a = orgA;
		b = orgB;
	}
	else
	{
		a = orgB;
		b = orgA;
	}

	//Euclids Lemma: a = b * q + r where 0 <= r < q; 
	
    while (b >= 1)
    {
        if (a % b == 0)
        {
            HCF = b;
            printf("The HCF of %i and %i is %i", orgA, orgB, HCF);
            
            if (HCF == 1)
                printf("\nThe numbers are co-prime");
            
            break;
        }
        else
        {
            r = a % b;
            a = b;
            b = r;
        }    
    }
    
    getch();
	return 0;
}
