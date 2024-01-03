#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//  TALHA KORKMAZ 230202010

int Msayi(int);

int main()
{
    int num;

    printf("Bir sayi girin: ");
    scanf("%d", &num);


    int Msayi(int num);
    
    if(Msayi(num) == num)
        printf("\n%d Mukemmel sayidir.", num);
    else
        printf("\n%d Mukemmel sayi degildir.", num);

    return 0;
}

int Msayi(int num)
{
    int toplam = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0)
        toplam = toplam + i;
    }

    if(num == toplam)
        return toplam;
    
    return num - 1;
}
