/*
 *  Math Tools in C 
 *      FIBONACCI
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

void fibonacci(int n)
{
	int a = 0, b = 1, temp;
    
	while (b <= n)
	{
		printf("%i ", b);
		temp = b;
		b += a;
		a = temp;
	}
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%i", &a);

    printf("Fibonacci series upto %i: \n", a);
    fibonacci(a);

    getch();
    return 0;
}
