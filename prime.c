/*
 *  Math Tools in C 
 *      PRIME
 *
 *  https://afaan.ml/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://google.com/+AfaanBilal)
 *
 */
 

#include <stdio.h>
#include <math.h>

#define false 0
#define true  1

typedef int bool;

bool isPrime(int n)
{
	int i = 2;
	
    if (n == 1)
		return false;
	
	while (i < sqrt(n))
	{
		if (n % i == 0)
			return false;
            
		i++;
	}
	
	return true;	
}

int main()
{
	int a;
    
	printf("Enter a number: ");
	scanf("%i", &a);
	
	if (isPrime(a))
		printf("%i is prime.", a);
	else
		printf("%i is not prime.", a);
	
    getch();
	return 0;
}
