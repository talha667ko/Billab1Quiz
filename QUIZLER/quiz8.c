#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// 230202010 Talha KORKMAZ

int ucgenKontrolu(int,int,int);
int ucgenTurunuBelirle(int,int,int);

int main()
{
    int kenar1, kenar2, kenar3;

    printf("Ucgenin kenar uzunluklarini giriniz: ");

    while(1){
    scanf("%d %d %d", &kenar1, &kenar2, &kenar3);

    if(kenar1 <= 0 || kenar2 <= 0 || kenar3 <= 0){
        printf("Kenar uzunluklari sifirdan buyuk olmasi gerek. Tekrar giris yapiniz: ");
        continue;
    }
    ucgenKontrolu(kenar1, kenar2, kenar3);

    if(ucgenKontrolu(kenar1, kenar2, kenar3) == 1)
        ucgenTurunuBelirle(kenar1,kenar2,kenar3);
    else
        printf("Girilen degerler bir ucgen olusturmuyor.");

    break;
    }
}

int ucgenKontrolu(int kenar1,int kenar2,int kenar3)
{
    if(kenar1 < kenar2 + kenar3 && kenar2 < kenar1 + kenar3 && kenar3 < kenar1 + kenar2)
        return 1;
    else
        return 0;
}

int ucgenTurunuBelirle(int kenar1,int kenar2,int kenar3)
{
    if(kenar1 == kenar2 && kenar1 == kenar3 && kenar2 == kenar3)
        printf("Bir eskenar ucgendir.");
    else if(kenar1 == kenar2 || kenar2 == kenar3|| kenar2 == kenar3)
        printf("Bir ikizkenar ucgendir.");
    else
        printf("Bir cesitkenar ucgendir.");

    return 0;
}
