#include <stdio.h>
#include <string.h>

void dosya_olustur(void);
void yeni_kayit_ekle(void);
void listele(void);
void isme_gore_ara(char[]);

int main()
{
    int islem;
    char isim[20];

    printf("\nDosya oluþtur 1\nYeni kayýt ekle 2\nListele 3\nÝsimle ara 4\nÇýkýþ 5  ");
    scanf("%d", &islem);

    while (islem != 5)
    {
        switch (islem)
        {
            case 1:
                dosya_olustur();
                break;
            case 2:
                yeni_kayit_ekle();
                break;
            case 3:
                listele();
                break;
            case 4:
                printf("Aramak istediðiniz ismi yazýn: ");
                scanf("%s", isim);
                isme_gore_ara(isim);
                break;
        }
        printf("\n? ");
        scanf("%d", &islem);
    }

    return 0;
}

void dosya_olustur(void)
{
    FILE *dosya;
    int ogrenci_no, devam = 1;
    char isim[20], bolum[20];

    dosya = fopen("ogrenci", "w");

    while (devam == 1)
    {
        printf("\nÝsim: ");
        scanf("%s", isim);
        printf("Öðrenci numarasý: ");
        scanf("%d", &ogrenci_no);
        printf("Bölüm: ");
        scanf("%s", bolum);

        fprintf(dosya, "\n%d %s %s", ogrenci_no, isim, bolum);

        printf("Devam etmek için 1 girin: ");
        scanf("%d", &devam);
    }

    fclose(dosya);
}

void yeni_kayit_ekle(void)
{
    FILE *dosya;
    int ogrenci_no;
    char isim[20], bolum[20];

    dosya = fopen("ogrenci", "a");

    printf("Ýsim: ");
    scanf("%s", isim);
    printf("Öðrenci numarasý: ");
    scanf("%d", &ogrenci_no);
    printf("Bölüm: ");
    scanf("%s", bolum);

    fprintf(dosya, "\n%d %s %s", ogrenci_no, isim, bolum);

    fclose(dosya);
}

void listele(void)
{
    int ogrenci_no;
    char isim[20], bolum[20];
    FILE *dosya;

    dosya = fopen("ogrenci", "r");

    while (!feof(dosya))
    {
        fscanf(dosya, "%d%s%s", &ogrenci_no, isim, bolum);
        printf("\n%d %s %s", ogrenci_no, isim, bolum);
    }

    fclose(dosya);
}

void isme_gore_ara(char aranan_isim[])
{
    int ogrenci_no;
    char isim[20], bolum[20];
    FILE *dosya;

    dosya = fopen("ogrenci", "r");

    while (!feof(dosya))
    {
        fscanf(dosya, "%d%s%s", &ogrenci_no, isim, bolum);
        if (strcmp(isim, aranan_isim) == 0)
            printf("\n%d %s %s", ogrenci_no, isim, bolum);
    }

    fclose(dosya);
}
