#include <stdio.h>
#include <stdlib.h>
// TALHA KORKMAZ 230202010


int main()
{
int cevap1;
int cevapK;
int cevapA;
int cevapY;
int skor = 10;

printf("Bilinci yerinde mi? (1 evet, 0 hayir): ");
scanf("%d", &cevap1);

if(cevap1 == 1){

   printf("Kanamasi var mi? (0 yok, 1 az, 2 cok): ");
   scanf("%d", &cevapK);
   printf("Agrisi var mi? (0 yok, 1 az, 2 cok): ");
   scanf("%d", &cevapA);
   printf("Hasta yasi?: ");
   scanf("%d", &cevapY);

   if(cevapK==2 || cevapA==2 && cevapY>=65){
    skor = skor + 40;

    if (skor>=50)
        printf("Kirmizi Alan, hasta aciliyet skoru: %d", skor);
    else if(skor<50 , skor>=30)
        printf("Sari Alan, hasta aciliyet skoru: %d", skor);
    else if(skor<30 , skor>=10)
        printf("Yesil Alan, hasta aciliyet skoru: %d", skor);
        else
        printf("Nasil Yardimci olabilirim?");
}
else if(cevapK==1 || cevapA==2){
    skor = skor + 20;

    if (skor>=50)
        printf("Kirmizi Alan, hasta aciliyet skoru: %d", skor);
    else if(skor<50 , skor>=30)
        printf("Sari Alan, hasta aciliyet skoru: %d", skor);
    else if(skor<30 , skor>=10)
        printf("Yesil Alan, hasta aciliyet skoru: %d", skor);
        else
        printf("Nasil Yardimci olabilirim?");
}
else if(cevapK==0 && cevapA==1){
    skor = skor + 10;

    if (skor>=50)
        printf("Kirmizi Alan, hasta aciliyet skoru: %d", skor);
    else if(skor<50 , skor>=30)
        printf("Sari Alan, hasta aciliyet skoru: %d", skor);
    else if(skor<30 , skor>=10)
        printf("Yesil Alan, hasta aciliyet skoru: %d", skor);
        else
        printf("Nasil Yardimci olabilirim?");
}
else
    printf("Nasil yardimci olabirim?");

}
else
    printf("Acil mudahale yapilmasi gerek!");

return 0;

}
