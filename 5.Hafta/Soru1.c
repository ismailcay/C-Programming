#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Ogrenci {
    int numara;
    char ad[50];
    float vizeNotu;
    float finalNotu;
    struct Ogrenci* sonraki;
};


struct Ogrenci* baslangic = NULL;


void menuGoster();
void yeniKayitEkle();
void kayitListele(int secim, float sinir);
void kayitGuncelle(int numara);
float sinifOrtalamasiniHesapla();
void enBasariliOgrenciyiGoster();

int main() {
    int secim;
    float sinir;

    do {
        menuGoster();
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                yeniKayitEkle();
                break;
            case 2:
                printf("Kayitlari numaraya gore listele (1) veya notlara gore listele (2): ");
                scanf("%d", &secim);
                if (secim == 1 || secim == 2) {
                    printf("Sinir degerini girin: ");
                    scanf("%f", &sinir);
                    kayitListele(secim, sinir);
                } else {
                    printf("Hatali secim. Lutfen tekrar deneyin.\n");
                }
                break;
            case 3:
                printf("Guncellenecek ogrencinin numarasini girin: ");
                scanf("%d", &secim);
                kayitGuncelle(secim);
                break;
            case 4:
                printf("Sinif Ortalamasi: %.2f\n", sinifOrtalamasiniHesapla());
                break;
            case 5:
                enBasariliOgrenciyiGoster();
                break;
            case 0:
                printf("Program kapatiliyor...\n");
                break;
            default:
                printf("Hatali secim. Lutfen tekrar deneyin.\n");
        }
    } while (secim != 0);

    struct Ogrenci* gecici;
    while (baslangic != NULL) {
        gecici = baslangic;
        baslangic = baslangic->sonraki;
        free(gecici);
    }

    return 0;
}

void menuGoster() {
    printf("\n-- Ogrenci Bilgi Yonetim Sistemi --\n");
    printf("1- Yeni Kayit Ekleme\n");
    printf("2- Kayit Listeleme\n");
    printf("3- Kayit Guncelleme\n");
    printf("4- Sinif Ortalamasi Hesapla\n");
    printf("5- Ortalamaya Gore En Basarili Ogrenci Bilgisi\n");
    printf("0- Cikis\n");
    printf("Seciminizi girin: ");
}

void yeniKayitEkle() {
    struct Ogrenci* yeni = (struct Ogrenci*)malloc(sizeof(struct Ogrenci));
    if (yeni == NULL) {
        printf("Bellek tahsisi basarisiz. Yeni kayit eklenemedi.\n");
        return;
    }

    printf("Ogrenci Numarasi: ");
    scanf("%d", &(yeni->numara));
    printf("Ogrenci Adi: ");
    scanf("%s", yeni->ad);
    printf("Vize Notu: ");
    scanf("%f", &(yeni->vizeNotu));
    printf("Final Notu: ");
    scanf("%f", &(yeni->finalNotu));

    yeni->sonraki = baslangic;
    baslangic = yeni;

    printf("Yeni kayit eklendi.\n");
}

void kayitListele(int secim, float sinir) {
    struct Ogrenci* current = baslangic;

    if (current == NULL) {
        printf("Kayit bulunamadi. Liste bos.\n");
        return;
    }

    if (secim == 1) {
        printf("\n-- Numaraya Gore Liste --\n");
        printf("Numara\tAd\tVize\tFinal\n");
        while (current != NULL) {
            if (current->numara >= sinir) {
                printf("%d\t%s\t%.2f\t%.2f\n", current->numara, current->ad, current->vizeNotu, current->finalNotu);
            }
            current = current->sonraki;
        }
    } else if (secim == 2) {
        printf("\n-- Notlara Gore Liste --\n");
        printf("Numara\tAd\tVize\tFinal\n");
        while (current != NULL) {
            if ((current->vizeNotu + current->finalNotu) / 2 >= sinir) {
                printf("%d\t%s\t%.2f\t%.2f\n", current->numara, current->ad, current->vizeNotu, current->finalNotu);
            }
            current = current->sonraki;
        }
    }
}

void kayitGuncelle(int numara) {
    struct Ogrenci* current = baslangic;

    while (current != NULL) {
        if (current->numara == numara) {
            printf("Yeni Vize Notu: ");
            scanf("%f", &(current->vizeNotu));
            printf("Yeni Final Notu: ");
            scanf("%f", &(current->finalNotu));
            printf("Kayit guncellendi.\n");
            return;
        }
        current = current->sonraki;
    }

    printf("Ogrenci numarasi bulunamadi. Kayit guncellenemedi.\n");
}

float sinifOrtalamasiniHesapla() {
    struct Ogrenci* current = baslangic;
    float toplamNot = 0;
    int ogrenciSayisi = 0;

    while (current != NULL) {
        toplamNot += (current->vizeNotu + current->finalNotu) / 2;
        ogrenciSayisi++;
        current = current->sonraki;
    }

    if (ogrenciSayisi == 0) {
        return 0;
    } else {
        return toplamNot / ogrenciSayisi;
    }
}

void enBasariliOgrenciyiGoster() {
    struct Ogrenci* current = baslangic;
    struct Ogrenci* enBasarili = NULL;
    float enYuksekOrtalama = 0;

    while (current != NULL) {
        float ortalama = (current->vizeNotu + current->finalNotu) / 2;
        if (ortalama > enYuksekOrtalama) {
            enYuksekOrtalama = ortalama;
            enBasarili = current;
        }
        current = current->sonraki;
    }

    if (enBasarili != NULL) {
        printf("En Basarili Ogrenci Bilgisi:\n");
        printf("Numara: %d\n", enBasarili->numara);
        printf("Ad: %s\n", enBasarili->ad);
        printf("Vize Notu: %.2f\n", enBasarili->vizeNotu);
        printf("Final Notu: %.2f\n", enBasarili->finalNotu);
    } else {
        printf("Kayit bulunamadi. Liste bos.\n");
    }
}
