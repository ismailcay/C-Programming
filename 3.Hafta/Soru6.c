#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_KELIME_UZUNLUGU 100
// pointer ile cumleyi tersden yazdirma
void kelimeleriTerstenYazdir(char *cumle) {
    char **kelimeler = NULL;
    int kelimeSayisi = 0;

    char *parca = strtok(cumle, " ");
    while (parca != NULL) {
        kelimeler = (char **)realloc(kelimeler, (kelimeSayisi + 1) * sizeof(char *));
        kelimeler[kelimeSayisi] = (char *)malloc((strlen(parca) + 1) * sizeof(char));

        int uzunluk = strlen(parca);
        for (int i = 0; i < uzunluk; i++) {
            kelimeler[kelimeSayisi][i] = parca[uzunluk - 1 - i];
        }
        kelimeler[kelimeSayisi][uzunluk] = '\0';

        kelimeSayisi++;
        parca = strtok(NULL, " ");
    }

    for (int i = kelimeSayisi - 1; i >= 0; i--) {
        printf("%s ", kelimeler[i]);
        free(kelimeler[i]);
    }
    printf("\n");

    free(kelimeler);
}

int main() {
    char girisCumlesi[MAX_KELIME_UZUNLUGU * MAX_KELIME_UZUNLUGU];

    printf("Bir cümle giriniz: ");
    fgets(girisCumlesi, sizeof(girisCumlesi), stdin);

    if (girisCumlesi[strlen(girisCumlesi) - 1] == '\n') {
        girisCumlesi[strlen(girisCumlesi) - 1] = '\0';
    }

    kelimeleriTerstenYazdir(girisCumlesi);

    return 0;
}
