#include <stdio.h>
#include <stdbool.h>
#include "recursionUtil.h"
void ikinciHarfleriYildizIleDegistir(char *metin, int index) {
    if (metin[index] == '\0') {
        return;
    }

    if (metin[index] != ' ' && index % 2 == 1) {
        metin[index] = '*';
    }

    ikinciHarfleriYildizIleDegistir(metin, index + 1);
}

int yildizMetinMain() {
    char metin[100];
    printf("Metni giriniz: ");
    scanf("%[^\n]", metin);

    bool yeniKelime = true;
    int index = 0;

    while (metin[index] != '\0') {
        if (metin[index] == ' ') {
            yeniKelime = true;
        } else {
            if (yeniKelime) {
                yeniKelime = false;
            } else {
                ikinciHarfleriYildizIleDegistir(metin, index);
            }
        }
        index++;
    }
    printf("Yildizli metin: %s\n", metin);

    return 0;
}
