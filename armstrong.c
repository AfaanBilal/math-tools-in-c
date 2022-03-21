/*
 *  Math Tools in C 
 *      ARMSTRONG NUMBER
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

int isArmstrong(int n)
{
	int a = 0, t = n;
    
	while  (t > 0)
	{
		a += (t % 10) * (t % 10) * (t % 10);
		t /= 10;
	}
	
	return a == n;
}

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%i", &x);

    if (isArmstrong(x))
        printf("%i is an armstrong number.", x);
    else
        printf("%i is not an armstrong number.", x);

    getch();
    return 0;
}
