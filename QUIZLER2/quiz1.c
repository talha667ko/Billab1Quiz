#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// 230202010 TALHA KORKMAZ

void PrintNums(int dizi[])
{
    for(int i = 0; i < 20; i++){
        printf("%d\n", dizi[i]);
    }
}
int FarkliRKM(int sayi)
{
    int bir, on, yuz, bin = 0;

    bir = sayi%10;
    sayi = sayi/10;
    on = sayi%10;
    sayi = sayi/10;
    yuz = sayi%10;
    sayi = sayi/10;
    bin = sayi;

    if(bir == on || bir == yuz || bir == bin || on == yuz || on == bin || yuz == bin)
        return 0;
    else
        return 1;
}

void SayiUret(int dizi[])
{
    srand(time(NULL));
    int yedek = 0;

    for(int i = 0; i < 20; i++){
            check:
        dizi[i] = rand() % 8999 + 1000;

        yedek = dizi[i];
        FarkliRKM(yedek);

        if(FarkliRKM(yedek) == 1)
            continue;
        else
            goto check;
    }
    PrintNums(dizi);
}
int main()
{
    int dizi[20] = { 0 };
    srand(time(NULL));

    SayiUret(dizi);
    return 0;
}
