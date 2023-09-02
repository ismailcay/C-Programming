#include<stdio.h>


int kitleIndeks(float boy, float kilo){

float boyKiloIndeks = kilo/(boy*boy);

if(boyKiloIndeks<=18){
    return 1;
} else if (boyKiloIndeks<=25){
    return 2;
}else if (boyKiloIndeks<=30){
    return 3;
} else {
    return 4;
}



}


int main()
{
    float boy,kilo;
    int sonuc;

    printf("Boyunuzu giriniz.\n");
    scanf("%f", &boy);
    printf("Kilonuzu giriniz.\n");
    scanf("%f", &kilo);

    sonuc=kitleIndeks(boy,kilo);
    if(sonuc==1){
    printf("Zayif");
} else if (sonuc==2){
    printf("Normal");
}else if (sonuc==3){
     printf("Kilolu");
} else {
    printf("Obez");
}



    return 0;
}
