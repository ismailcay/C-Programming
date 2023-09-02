#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int arr[MAX], sayi;

    int kalanlar;
    printf("Ogrenci sayisini giriniz.\n");

    scanf("%d", &sayi);

    kalanlar=hesapla(arr, sayi);

    printf("Dersden kalan kisi sayisi: %d\n", kalanlar);

    return 0;
}
int hesapla (int arr1 [], int sayi)
{
    int i;
    int gecmeNotu=50;
    int kalanlar=0;
    int notToplam=0;
    float ortalama;
    printf("Lütfen %d ogrecinin notlarini giriniz.\n", sayi);
    for(i=0; i<sayi; i++){
        scanf("%d", &arr1[i]);

    }

    for(i=0; i<sayi; i++){
       if(arr1[i]<gecmeNotu){
        kalanlar++;
       }
       notToplam += arr1[i];
    }

    ortalama=notToplam/sayi;


    printf("Ortalama: %f\n", ortalama);

    return kalanlar;

}




