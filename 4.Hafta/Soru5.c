#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[50];
    char surname[50];
    float midtermGrade;
};

int main() {
    struct student students[10];
    for (int i = 0; i < 3; i++) {
        printf("��renci #%d bilgilerini girin:\n", i + 1);

        printf("Numara: ");
        scanf("%d", &students[i].number);

        printf("Ad: ");
        scanf("%s", students[i].name);

        printf("Soyad: ");
        scanf("%s", students[i].surname);

        printf("Ara s�nav notu: ");
        scanf("%f", &students[i].midtermGrade);
    }

    printf("\nGirilen ��rencilerin Bilgileri:\n");
    for (int i = 0; i < 3; i++) {
        printf("��renci #%d\n", i + 1);
        printf("Numara: %d\n", students[i].number);
        printf("Ad: %s\n", students[i].name);
        printf("Soyad: %s\n", students[i].surname);
        printf("Ara s�nav notu: %.2f\n\n", students[i].midtermGrade);
    }

    return 0;
}
