#include <stdio.h>
#include <stdlib.h>
// TALHA KORKMAZ 230202010

int main()
{
    int sayi1;
    int sayi2;
    int sayi3;
    int sayi4;
    int choice;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);
    printf("Dorduncu sayiyi giriniz: ");
    scanf("%d", &sayi4);

    printf("\nNegatif sayilari listele 1");
    printf("\nPozitif sayilari listele 2");
    printf("\nTek sayilari listele 3");
    printf("\nCift sayilari listele 4");
    printf("\nSecim yapiniz (1, 2, 3 veya 4): ");
    scanf("%d", &choice);


    switch(choice){
    case 1:
        printf("Negatif sayilar: ");
        if(sayi1<0)
            printf(" %d", sayi1);
        if(sayi2<0)
            printf(" %d", sayi2);
        if(sayi3<0)
            printf(" %d", sayi3);
        if(sayi4<0)
            printf(" %d", sayi4);
        break;
    case 2:
        printf("Pozitif sayilar: ");
        if(sayi1>0)
            printf(" %d", sayi1);
        if(sayi2>0)
            printf(" %d", sayi2);
        if(sayi3>0)
            printf(" %d", sayi3);
        if(sayi4>0)
            printf(" %d", sayi4);
        break;
    case 3:
        printf("Tek sayilar: ");
        if(sayi1%2!=0)
            printf(" %d", sayi1);
        if(sayi2%2!=0)
            printf(" %d", sayi2);
        if(sayi3%2!=0)
            printf(" %d", sayi3);
        if(sayi4%2!=0)
            printf(" %d", sayi4);
        break;
    case 4:
        printf("Cift sayilar: ");
        if(sayi1%2==0)
            printf(" %d", sayi1);
        if(sayi2%2==0)
            printf(" %d", sayi2);
        if(sayi3%2==0)
            printf(" %d", sayi3);
        if(sayi4%2==0)
            printf(" %d", sayi4);
        break;
    default:
        printf("Hatali islem sectiniz! Lutfen 1, 2, 3 veya 4 islemlerinden birini seciniz.\n");
    }

    return 0;
}
