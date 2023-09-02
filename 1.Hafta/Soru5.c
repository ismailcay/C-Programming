#include <stdio.h>
#include <stdlib.h>

int sum(int sayi);
int main()
{

    int a, sonuc;

    printf("Rakamlarin Toplami\n");
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",& a);
    sonuc=sum(a);
    printf("Rakamlarin Toplami: %d\n", sonuc);

    return 0;
}
int sum(int sayi){

    if (sayi !=0){

       return (sayi%10 + sum(sayi/10));


    }else{
    return 0;
    }
}

