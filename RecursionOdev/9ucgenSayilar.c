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
    printf("Ka��nc� ��gen say�y� hesaplamak istiyorsunuz? ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Ge�ersiz say� girdiniz. L�tfen pozitif bir say� girin.\n");
    } else {
        int sonuc = ucgenSayi(n);
        printf("%d. ��gen say�s�: %d\n", n, sonuc);
    }

    return 0;
}



