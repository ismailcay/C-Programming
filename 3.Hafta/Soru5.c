#include <stdio.h>
#include <stdlib.h>

void fun1(int num, int **tek, char **cift);

int main() {
    int ogrencino;
    int *tek = NULL;
    char *cift = NULL;

    printf("Ogrenci numaranizi giriniz: \n");
    scanf("%d", &ogrencino);

    fun1(ogrencino, &tek, &cift);

    printf("Tek Sayilar: ");
    for (int i = 0; tek[i] != -1; i++) {
        printf("%d ", tek[i]);
    }
    printf("\n");

    printf("Cift Sayilar: %s\n", cift);

    free(tek);
    free(cift);
    return 0;
}

void fun1(int num, int **tek, char **cift) {
    int countTek = 0;
    int countCift = 0;
    int sayi = num;
    int yeniNo;

    while (sayi > 0) {
        int digit = sayi % 10;
        if (digit % 2 == 0) {
            countCift++;
        } else {
            countTek++;
        }
        sayi /= 10;
    }

    *tek = (int *)malloc((countTek + 1) * sizeof(int));
    *cift = (char *)malloc((countCift + 1) * sizeof(char));

    yeniNo = num;
    int tekIndex = 0, ciftIndex = 0;

    while (yeniNo > 0) {
        int digit = yeniNo % 10;
        if (digit % 2 == 0) {
            (*cift)[(countCift - 1) - ciftIndex] = digit + '0';
            ciftIndex++;
        } else {
            (*tek)[tekIndex] = digit;
            tekIndex++;
        }
        yeniNo /= 10;
    }

    (*tek)[tekIndex] = -1;
    (*cift)[countCift] = '\0';
}
