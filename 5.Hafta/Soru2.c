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

    printf("\nDosya olu�tur 1\nYeni kay�t ekle 2\nListele 3\n�simle ara 4\n��k�� 5  ");
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
                printf("Aramak istedi�iniz ismi yaz�n: ");
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
        printf("\n�sim: ");
        scanf("%s", isim);
        printf("��renci numaras�: ");
        scanf("%d", &ogrenci_no);
        printf("B�l�m: ");
        scanf("%s", bolum);

        fprintf(dosya, "\n%d %s %s", ogrenci_no, isim, bolum);

        printf("Devam etmek i�in 1 girin: ");
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

    printf("�sim: ");
    scanf("%s", isim);
    printf("��renci numaras�: ");
    scanf("%d", &ogrenci_no);
    printf("B�l�m: ");
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
