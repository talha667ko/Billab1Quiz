#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Hem 11 hane olmasi hem de hanelerin rakam olmasi kontrolu hem de ilk hane sifir kontrolu
int haneKontrol(char *str)
{
    int i=0;
    for(;str[i]!='\0';i++)
            if(str[i]<48 || str[i]>57)
                break;

    if(i!=11 || str[0]=='0')
        return 0;
    else
        return 1;

}
int toplamKontrol(char *str)
{
    int tekToplam=0,ciftToplam=0;

    for(int i=0;i<9;i++)
    {

        if((i%2)==0)
            tekToplam+=(str[i]-'0');
        else
            ciftToplam+=(str[i]-'0');
    }

    int sonuc=(7*tekToplam-ciftToplam)%10;
    if(sonuc==(str[9]-'0'))
        return 1;
    else
        return 0;

}
int toplamKontrol2(char *str)
{
    int toplam=0;


    for(int i=0;i<10;i++)
    {
            toplam+=(str[i]-'0');
    }

    if( toplam%10== (str[10]-'0'))
        return 1;
    else
        return 0;

}
int main() {

   char str[100];
   int s=0;


   printf("TC Kimlik Numarasini Giriniz\n");
   fgets(str,100,stdin);

   s=haneKontrol(str);

   if(s)
   {

       if(toplamKontrol(str))
       {
           if(toplamKontrol2(str))
            printf("Dogru TC\n");
           else
            printf("Hatali TC");
       }
       else
        printf("Hatali TC");
   }
   else
       printf("Hatali TC");

}
