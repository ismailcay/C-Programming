#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    int b;

    srand(time(NULL));

    a=rand() % 6+1;
    b=rand() % 6+1;

    int sum= a+b;
    int puan;

    printf("Gelen zarlarin toplami:%d\n",sum);
    if (sum==7 || sum==11)
    {
        printf("Tebrikler Kazandiniz\n");
    }
    else if (sum ==2 || sum==3 || sum==12)
    {
        printf("Malesef Kaybettiniz\n");
    }
    else
    {
        printf("Oyun devam ediyor, puaniniz:%d\n",sum);
        puan=sum;
        while(1)
        {
            a = rand() % 6 + 1;
            b = rand() % 6 + 1;
            sum = a + b;
            printf("Atilan yeni zarlar: %d + %d = %d\n", a, b, sum);

            if (sum == puan)
            {
                printf("Tebrikler Kazandiniz!\n");
                break;
            }
            else if (sum == 7)
            {
                printf("Malesef 7 geldi ve Kaybettiniz.\n");
                break;
            }
        }

    }

}


