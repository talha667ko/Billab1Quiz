#include <stdio.h>
#include <stdlib.h>
// Talha KORKMAZ 230202010

int main()
{

    int x;
    int y;
    int z;

    printf("x degerini girin : ");
    scanf("%d", &x);

    printf("y degerini girin : ");
    scanf("%d", &y);

    z = 3*(x*x*x) + 2*y + 5;
    printf("\nSonuc 3x^3+2y+5 : %d", z);


    return 0;
}
