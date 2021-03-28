#include <stdio.h>
#include <stdlib.h>




int main()
{
    for(;;)
    {
        int a;
        int b;
        int wynik;
        int pods;
        int h;
        int wynik2;
        int t;
        printf("Objetosc prostopadloscianu\n");


    printf("wprowadz dlugosc boku a\n");
    scanf("%d", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%d", &b);
    printf("wprowadz wysokosc h\n");
    scanf("%d", &h);
    wynik = a*b*h;
    printf("wynik=" "%d\n", wynik);

    return 0;
    }
}


