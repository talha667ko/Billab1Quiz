#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

// TALHA KORKMAZ 230202010

struct odaBilgi{
    int odaNo;
    int yatak;
    float ucret;
    char manzara[50];
};
struct musteriBilgi{
    char ad[100];
    struct odaBilgi musterioda;
    char tarihG[20];
    char tarihC[20];
    float toplamUcret;
};
void girisara(struct musteriBilgi *bilgi,int i)
{

    int agun,aay,ayil;
    int gun,ay,yil;
    printf("\nAranan giris tarihi (gg aa yyyy): ");
    scanf("%d %d %d",&agun,&aay,&ayil);

    for (int y = 0; y < i; y++)
    {
        sscanf(bilgi->tarihG,"%d/%d/%d",&gun,&ay,&yil);
        if (gun == agun && ay == aay && yil == ayil)
        {
        printf("Musterinin adi: %s",bilgi->ad);
        printf("  Oda numarasi: %d",bilgi->musterioda.odaNo);
        printf("\n  Yatak sayisi: %d",bilgi->musterioda.yatak);
        printf("\n  Ucret: %.2f",bilgi->musterioda.ucret);
        printf("\n  Manzara: %s",bilgi->musterioda.manzara);
        printf("  Giris tarihi: %s",bilgi->tarihG);
        printf("  Cikis tarihi: %s",bilgi->tarihC);
        printf("  Toplam ucret: %.2f",bilgi->toplamUcret);
        }
        bilgi++;
    }
    
}
void odaAra(struct musteriBilgi *bilgi,int i)
{
    int arananOda;
    printf("Aradiginiz oda numarasi: ");
    scanf("%d",&arananOda);

    for(int y =0; y<i;y++){
        if(bilgi->musterioda.odaNo == arananOda){
        printf("Musterinin adi: %s",bilgi->ad);
        printf("  Oda numarasi: %d",bilgi->musterioda.odaNo);
        printf("\n  Yatak sayisi: %d",bilgi->musterioda.yatak);
        printf("\n  Ucret: %.2f",bilgi->musterioda.ucret);
        printf("\n  Manzara: %s",bilgi->musterioda.manzara);
        printf("  Giris tarihi: %s",bilgi->tarihG);
        printf("  Cikis tarihi: %s",bilgi->tarihC);
        printf("  Toplam ucret: %.2f",bilgi->toplamUcret);
        }
        bilgi++;
    }
}
void rezervasyonekle(struct musteriBilgi *ptrm,int i)
{
    ptrm = ptrm+i;
    printf("Yeni musteri ekleyin:\n");
    printf("Musterinin adi: ");
    fflush(stdin);
    fgets(ptrm->ad,100,stdin);
    printf("Oda numarasi:");
    scanf("%d",&ptrm->musterioda.odaNo);
    printf("Yatak sayisi:");
    scanf("%d",&ptrm->musterioda.yatak);
    printf("Ucret:");
    scanf("%f",&ptrm->musterioda.ucret);
    printf("Manzara:");
    fflush(stdin);
    fgets(ptrm->musterioda.manzara,50,stdin);
    printf("Giris tarihi (gg/aa/yyyy):");
    fflush(stdin);
    fgets(ptrm->tarihG,20,stdin);
    printf("Cikis tarihi (gg/aa/yyyy):");
    fflush(stdin);
    fgets(ptrm->tarihC,20,stdin);
    ptrm->toplamUcret = ptrm->musterioda.ucret;
}
void rezervasyonlistele(struct musteriBilgi *bilgi,int i)
{
    for(int y=0; y<i;y++){
        printf("%d.Musterinin adi: %s",y+1,bilgi->ad);
        printf("  Oda numarasi: %d",bilgi->musterioda.odaNo);
        printf("\n  Yatak sayisi: %d",bilgi->musterioda.yatak);
        printf("\n  Ucret: %.2f",bilgi->musterioda.ucret);
        printf("\n  Manzara:%s",bilgi->musterioda.manzara);
        printf("  Giris tarihi: %s",bilgi->tarihG);
        printf("  Cikis tarihi: %s",bilgi->tarihC);
        printf("  Toplam ucret: %.2f\n\n",bilgi->toplamUcret);
        bilgi++;
    }
}
int main()
{
    int secim;
    struct musteriBilgi a[10];
    int i=0;

    while(secim != 5){
        printf("---Otel Rezervasyon Sistemi---\n");
        printf("1.Rezervasyon ekle\n2.Rezervasyonlari listele\n");
        printf("3.Oda numarasina gore ara\n4.Giris tarihine gore ara\n5.Cikis\n");

        printf("Seciminizi yapin: ");
        scanf("%d",&secim);


        switch(secim)
        {
            case 1:
               rezervasyonekle(&a,i);
               i++;
               printf("\n------------------------------\n");
            break;
            case 2:
                rezervasyonlistele(&a,i);
                printf("\n------------------------------\n");
            break;
            case 3:
                odaAra(&a,i);
                printf("\n------------------------------\n");
            break;
            case 4:
                girisara(&a,i);
                printf("\n------------------------------\n");
            break;
            case 5:
                printf("Sistemden cikiliyor...");
                printf("\n------------------------------\n");
                break;
        }
    }
    return 0;
}
