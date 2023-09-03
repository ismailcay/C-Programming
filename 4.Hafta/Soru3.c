#include <stdio.h>

void arayaEklemeSiralama(int dizi[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = dizi[i];
        j = i - 1;
        while (j >= 0 && dizi[j] > temp) {
            dizi[j + 1] = dizi[j];
            j--;
        }
        dizi[j + 1] = temp;
    }
}

int main() {
    int dizi[] = {12, 11, 13, 5, 6};
    int n = sizeof(dizi) / sizeof(dizi[0]);

    printf("Dizi oncesinde: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    arayaEklemeSiralama(dizi, n);

    printf("\nDizi sonrasýnda: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
