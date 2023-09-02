#include <stdio.h>
#include "recursionUtil.h"
int asalMi(int n, int i) {
    if (n <= 2)
        return n == 2;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return asalMi(n, i + 1);
}

int asalKontrolMain() {
    int n;
    printf("Asal sayý kontrolu icin lutfen sayi giriniz: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Gecersiz sayi girdiniz. Lutfen 2 veya 2'den daha buyuk bir sayi girin.\n");
    } else {
        int sonuc = asalMi(n, 2);
        if (sonuc)
            printf("%d sayisi asaldir.\n", n);
        else
            printf("%d sayisi asal deðildir.\n", n);
    }

    return 0;
}

