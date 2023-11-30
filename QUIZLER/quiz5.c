#include <stdio.h>
#include <stdlib.h>
// TALHA KORKMAZ 230202010

int main()
{
    int sayi1;
    int sayi2;
    int yedek;
    int mod;
    int toplam = 0;
    int modS;

        for(int a = 0; a < 100; a++){

            printf("1 ile 100 arasinda 2 tane pozitif tamsayi giriniz.");
            printf("\nBirinci sayi: ");
            scanf("%d", &sayi1);
            printf("Ikinci sayi: ");
            scanf("%d", &sayi2);

            if(sayi1 > 0 && sayi1 < 100 && sayi2 > 0 && sayi2 < 100){
                printf("Mod degerini giriniz: ");
                scanf("%d", &mod);
                printf("\n");

                 yedek = sayi1;
                 if(sayi2 < sayi1)
                    yedek = sayi2;
                else
                    sayi1 = sayi2;

                for(int i = yedek; i <= sayi1; i++){

                    modS = i % mod;
                    printf("(%dx%d)", i, modS);
                    if(i != sayi1)
                        printf("+");
                    toplam = toplam + i * modS;
                }

            }
            else{
                continue;}

                printf("\nToplam sonuc: %d", toplam);
                break;
        }

    return 0;
}
