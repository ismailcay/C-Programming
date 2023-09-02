#include <stdio.h>
#include <stdlib.h>
//pdf6 soru1
int main() {
    int elemanSayisi;
    printf("Eleman sayisini girin: ");
    scanf("%d", &elemanSayisi);

    int *dizi = (int *)calloc(elemanSayisi, sizeof(int));

    if (dizi == NULL) {
        printf("Bellek ayirma hatasi!");
        return 1;
    }
    for (int i = 0; i < elemanSayisi; i++) {
        printf("Eleman %d'i girin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    int enBuyuk = dizi[0];
    for (int i = 1; i < elemanSayisi; i++) {
        if (dizi[i] > enBuyuk) {
            enBuyuk = dizi[i];
        }
    }

    printf("En buyuk deger: %d\n", enBuyuk);
    free(dizi);
    return 0;
}
