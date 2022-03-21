/*
 *  Math Tools in C 
 *      Arithmetic Progressions
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

#include <stdio.h>

int main()
{
    printf("Arithmetic Progressions\n");
    printf("\nMenu: \n");
    printf("\n  [Operation]                            [Code]\n"
            "\n Find nth term (General term)             1"
            "\n Find sum of 'n' terms (Sn)               2"
            "\n Find 'a' (first term)                    3"
            "\n Enter your choice: "); 

    int menuChoice;
    scanf("%i", &menuChoice);

    while ( menuChoice < 1 || menuChoice > 3 )
    {
        printf("\n Invalid Choice!\n"
                " Please enter your choice properly again: ");
        scanf("%i", &menuChoice);
    }

    switch (menuChoice)
    {
    case 1:
        {
        int a, n, d, an;
        
        printf("\n\n [*** Finding nth term (General term) ***]\n"
                "\n Enter the value of 'a': "); 
        scanf("%i", &a);
        printf("\n Enter the value of 'n': ");
        scanf("%i", &n);
        printf("\n Enter the value of 'd': ");
        scanf("%i", &d);

        an = a + ((n - 1) * d);

        printf("\n The nth term is %i", an);
        }
        break;

    case 2:
        {
        int a, n, d, sn;
        
        printf("\n\n [*** Finding sum of 'n' terms (Sn) ***]\n"
                "\n Enter the value of 'a': ");
        scanf("%i", &a);
        printf("\n Enter the value of 'n': ");
        scanf("%i", &n);
        printf("\n Enter the value of 'd': ");
        scanf("%i", &d);

        sn = (n / 2) * (2 * a + ((n - 1) * d));

        printf("\n The sum of 'n' terms is: %i ", sn);
        }
        break;
        
    case 3:
        {
        int an, n, d, a;
        
        printf("\n\n [*** Finding 'a' (first term) ***]\n"
                "\n Enter the value of nth term: ");
        scanf("%i", &an);
        printf("\n Enter the value of 'n': ");
        scanf("%i", &n);
        printf("\n Enter the value of 'd': ");
        scanf("%i", &d);

        a = an - ((n - 1) * d);

        printf("\n First term ('a') is: %i ", a);
        }
        break;
    }

    getch();
    return 0;
}
