/*
 *  Math Tools in C 
 *      Number of Days <=> Years, Months, Days
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>
 
int main()
{
     int numDays, years, months, days;
     printf("Enter number of days: ");
     scanf("%d", &numDays);
     
     years = numDays / 365;
     months = ( numDays % 365 ) / 30;
     days = ( ( numDays % 365 ) % 30 );
     
     printf("%d days make %d years, %d months, %d days", numDays, years, months, days);
     
     printf("\nEnter number of years: ");
     scanf("%d", &years);
     printf("Enter number of months: ");
     scanf("%d", &months);
     printf("Enter number of days: ");
     scanf("%d", &days);
     
     numDays = years * 365 + months * 30 + days;
     
     printf("%d years, %d months, %d days make %d days", years, months, days, numDays);     
     
     getch();
     return 0;
}
 