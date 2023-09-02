#include <stdio.h>
#include <conio.h>

char* tersCevir(char* str);

int tersMetinMain() {
    int i, j, k;
    char metin[100];
    char *tersMetin;

    printf("Metini giriniz:\t");
    scanf("%s", metin);
    printf("Orijinal metin: %s\n", metin);
    tersMetin = tersCevir(metin);
    printf("Metnin tersi: %s\n", tersMetin);

    getch();
    return 0;
}

char* tersCevir(char* str) {
    static int i = 0;
    static char tersMetin[100];

    if (*str) {
        tersCevir(str + 1);
        tersMetin[i++] = *str;
    }
    return tersMetin;
}
/*
#include <stdio.h>
#include <conio.h>

char* tersCevir(char* str, int *a, int num);

int main() {
    int i, j, k;
    char metin[100];
    char *tersMetin;
    int *a=5;
    int num=5;
    printf("Metini giriniz:\t");
    scanf("%s", metin);
    printf("Orijinal metin: %s\n", metin);
    tersMetin = tersCevir(metin, a, num);
    printf("Metnin tersi: %s\n", tersMetin);

    getch();
    return 0;
}

char* tersCevir(char* str, int *a ,int num) {
    static int i = 0;
    static char tersMetin[100];

    if (*str) {
        tersCevir(str+1, a, num);
        tersMetin[i++] = *str;
    }
    return tersMetin;
}*/
