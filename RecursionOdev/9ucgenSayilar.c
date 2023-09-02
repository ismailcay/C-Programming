#include <stdio.h>
#include "recursionUtil.h"
int ucgenSayi(int n) {
    if (n == 1)
        return 1;
    else
        return n + ucgenSayi(n - 1);
}

int ucgenSayilarMain() {
    int n;
    printf("Kaçýncý üçgen sayýyý hesaplamak istiyorsunuz? ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Geçersiz sayý girdiniz. Lütfen pozitif bir sayý girin.\n");
    } else {
        int sonuc = ucgenSayi(n);
        printf("%d. üçgen sayýsý: %d\n", n, sonuc);
    }

    return 0;
}



