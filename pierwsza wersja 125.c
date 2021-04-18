#include <stdio.h>
#include <stdlib.h>




int main()
{
    for(;;)
    {
        float a;
        float b;
        float wynik;
        float pods;
        float h;
        float wynik2;
        float t;
        printf("Objetosc prostopadloscianu\n");


    printf("wprowadz dlugosc boku a\n");
    scanf("%f", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%f", &b);
    printf("wprowadz wysokosc h\n");
    scanf("%f", &h);
    wynik = a*b*h;
    printf("wynik=" "%f\n", wynik);

    return 0;
    }
}


