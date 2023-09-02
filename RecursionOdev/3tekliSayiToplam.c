#include <stdio.h>
#include <stdlib.h>
#include "recursionUtil.h"

int toplam (int a);

int tekHaneToplam()
{
    int sayi;
    printf("Tek Sayilarin Toplami\n");
    printf("Lutfen bir dogal sayi giriniz\n");
    scanf("%d", &sayi);

    int sonuc = toplam(sayi);
    printf("%d sayisina kadar tek sayilarin toplami: %d\n",sayi , sonuc);
    return 0;
}

int toplam(int a)
{
    if (a % 2 == 1)
    {
        return a + toplam(a - 1);
    }
    else if (a == 0)
    {
        return 0;
    }
    else
    {
        return toplam(a - 1);
    }
}

