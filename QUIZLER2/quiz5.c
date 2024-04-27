#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// TALHA KORKMAZ 230202010

void decorticate(char phase[], int *kN, float *kM, int *aN, float *aM)
{
    int age;
    char name[100];
    char surname[100];
    char course[50];
    int time;
    float price;
    sscanf(phase,"%d dogumlu %*c%s %[^']%*c %s %d saat ders almak istiyor.", &age, name, surname, course, &time);

    printf("Ad : %s\n", name);
    printf("Soyad : %s\n", surname);
    printf("Yas : %d\n", 2024-age);
    if(2024-age > 35){
        printf("Ders saati (Aylik): -\n");
        printf("Ders yogunlugu : -\n");
        printf("Toplam ucret (Aylık): -\n");
    }
    else{
    if(course[0] = 'g' && 2024-age <= 35){
        printf("Ders saati (Aylik): %d\n", time*24);
        if(2024 - age <=15)
            price = 500*time*24;
        else
            price = 1000*time*24;
    }
    else if(course[0] = 'h' && 2024-age <= 35){
        printf("Ders saati (Aylik): %d\n", time*4);
        if(2024 - age <=15)
            price = 500*time*4;
        else
            price = 1000*time*4;
    }
    else if(course[0] = 'a' && 2024-age <= 35){
        printf("Ders saati (Aylik): %d\n", time);
        if(2024 - age <=15)
            price = 500*time;
        else
            price = 1000*time;
    }

    printf("Ders yogunlugu: %s", course);

    }

    if(2024 - age <=15){
        *kN = *kN+1;
        *kM = *kM + price;
    }
    else if(2024 -age >15 && 2024 -age <=35){
        *aN = *aN+1;
        *aM = *aM + price;
    }

}
int main()
{
    int kidN =0;
    int adultN =0;
    char strK[200];
    char strA[200];
    float kidM =0;
    float adultM =0;
    char sentence[500];
    char phase[100];
    printf("Lutfen metni giriniz: ");
    scanf("%s", sentence);

    for(int i=0; sentence[i] != '\0'; i++)
    {
        for(int j=0; sentence[j+i] != '.'; j++)
        {
            phase[j] = sentence[i];
        }
        decorticate(phase,&kidN,&kidM,&adultN,&adultM);
    }
    sprintf(strK,"Cocuk kategorisinde yuzme kursuna kaydolmaya hak kazanan %d sporcunun kursa aylik toğplam getirisi %f TL.\n",kidN,kidM);
    sprintf(strA,"Yetiskin kategorisinde yuzme kursuna kaydolmaya hak kazanan %d sporcunun kursa aylik toğplam getirisi %f TL.\n",adultN,adultM);

    return 0;
}
