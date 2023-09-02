#include <stdio.h>

int SumOfElement(int[], int);

int arraySumMain() {
    int n = 5, dizi[5];

    printf("Array elemanlarinin toplami\n");
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    int toplam = SumOfElement(dizi, n - 1);
    printf("Toplam = %d\n", toplam);
    return 0;
}

int SumOfElement(int dizi[], int n) {
    if (n == 0)
        return dizi[0];
    return dizi[n] + SumOfElement(dizi, n - 1);
}
