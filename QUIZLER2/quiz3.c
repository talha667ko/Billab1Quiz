#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

// 230202010 TALHA KORKMAZ

int ControlTC(char *tc)
{
    char *kptr;
    int tcİNT;
    int toplam;
    int toplam2 =0;

    tcİNT = strtol(tc,kptr,10);
    printf("top %d", toplam2);
    printf("  %s", kptr);

    if(tc[0] == '0')
        return 0;

    if(isdigit(tc[11]))
        return 0;

    for(int i = 0; i < 11; i++)
    {
        if(isdigit(tc[i]))
            continue;
        else
            return 0;

        if(i %2 == 0)
            toplam2 = toplam2 + tc[i];
        else
            toplam = toplam + tc[i];
    }

    toplam = toplam *7;
    if((toplam - toplam2) %10 != )
        return 0;

    toplam = 0;
    for(int i = 0; i < 11; i++)
    {
        toplam = toplam + ;
    }
    if(toplam != )
        return 0;


    return 1;
}

int main()
{
    int x;
    char TCno[15];

    printf("TC Kimlik numarasini giriniz: ");
    fgets(TCno,13,stdin);

    x = ControlTC(TCno);
    if(x)
        printf("\nGecerli TC kimlik numarasi.");
    else
        printf("\nGecersiz TC kimlik numarasi.");

    return 0;
}
