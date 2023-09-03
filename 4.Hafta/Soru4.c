#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[50]="Merhaba Dunya";
    char str2[50];
    char str3[50];

    char str4[10]="uzunluk";
    char str5[10]="uzunluk";
    int len;
    int count;

    printf("%s\n", str1);

    printf("Lutfen bir string yaziniz.\n");
    gets(str2);

    strcpy(str3, "String-3");
    len=strlen(str3);
    printf("ilk uzunluk: %d\n", len);
    strcat(str3,str2);

    printf("birlestirilmis string: %s\n", str3);

    len=strlen(str3);
    printf("son uzunluk: %d\n", len);


    count=strcasecmp(str4,str5);
    printf("count = %d \n", count);

    if(count>0)
    {
        printf("str4 str5 den daha buyuk\n");

    }
    else if (count==0)
    {
        printf("str4 ile str5 buyuklugu esit\n");
    }
    else
    {
        printf("str4 str5 den daha buyuk\n");
    }

    return 0;
}
