#include <stdio.h>
#include <stdlib.h>

//  230202010 TALHA KORKMAZ
int main()
{
    int sayi;

    printf("3-10 arasi sayi giriniz: ");
    while(1){
    scanf("%d", &sayi);
    int x = sayi;

    if(sayi >= 3 && sayi <= 10){
        for(int i = 1; i <= sayi; i++){
            for(int a = 1; a <= sayi-i; a++){
                printf(" ");
            }
            for(int b = 1; b <= x; b++){
                printf("*");
            }
            x = x - 1;
            printf("\n");
        }

        for(int j = 1; j < sayi; j++){
            for(int c = 0; c < j; c++){
                printf(" ");
            }
            for(int d = 0; d <= j; d++){
                printf("*");
            }
            printf("\n");
        }
    }
    else{
        printf("3-10 arasi sayi girmelisiniz. Tekrar giris yapiniz: ");
        continue;
    }
    }
    return 0;
}
