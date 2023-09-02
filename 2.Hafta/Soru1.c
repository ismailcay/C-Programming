#include <stdio.h>

int sayiBul(int *A, int boyut);

int main() {
    int boyut;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &boyut);

    int A[boyut];

    printf("Dizinin elemanlarýný girin:\n");
    for (int i = 0; i < boyut; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    int sonuc = sayiBul(A, boyut);

    printf("Dizideki tek sayýlarýn sayýsý: %d\n", sonuc);

    return 0;
}

int sayiBul(int *A, int boyut) {
    if (boyut >= 0) {
        if ((A[boyut - 1] % 2) == 0)
            return sayiBul(A, boyut - 1);
        else
            return 1 + sayiBul(A, boyut - 1);
    } else
        return 0;
}
