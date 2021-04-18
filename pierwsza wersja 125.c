#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    for(;;)
    {
    int c=68 ;
    float a, b, wynik, h, wynik2, t, pole_podstawy;

        printf("wybierz operacje\n");
        printf("1.objetosc prostopadloscianu\n");
        printf("2.objetosc ostroslupa prawidlowego czworokatnego\n");
        printf("3. wyjscie\n");
        fflush (stdin);
        scanf("%d", &c);
        switch (c)

        {

        case 1:

            printf("wprowadz dlugosc boku a:\n");
            scanf("%f", &a);
            printf("wprowadz dlugosc boku b:\n");
            scanf("%f", &b);
            printf("wprowadz wysokosc h:\n");
            scanf("%f", &h);
            printf("Nieprawidlowa wartosc\n");
            wynik = a*b*h;
            printf("wynik=" "%f\n", wynik);
        break;

        case 2:

            printf("wprowadz dlugosc boku a:\n");
            scanf("%f", &a);
            pole_podstawy = a*a;
            printf("pole_podstawy=" "%f\n", pole_podstawy);
            printf("wprowadz wysokosc h:\n");
            scanf("%f", &h);
            printf("Nieprawidlowa wartosc\n");
            wynik2 = pole_podstawy * h / 3;
            printf("wynik=" "%f\n", wynik2);
        break;

        case 3:
            return 0;
            default:
                printf("Zly wybor\n");
        }


    }
    return 0;

}
