#include <stdio.h>
#include "recursionUtil.h"
int dogalSayiToplamMain() {
    int sayi;
    printf("Do�al Sayilarin Toplami\n");
    printf("Lutfen bir dogal sayi giriniz\n");
    scanf("%d", &sayi);

    int sonuc = sayiToplami(sayi);
    printf("Sayilarin toplami: %d\n", sonuc);

}

int sayiToplami (int a){

    if (a != 0){
        //printf("Sayilar: %d\n", a);
        return a + sayiToplami (a-1);

    }else{
        return a;
}
}
