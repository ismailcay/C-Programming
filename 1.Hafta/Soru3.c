// 1 den n kadar olan say�lar�n toplam�
#include <stdio.h>
int f(int);
int main()
{
    int n;
    printf("n say�s�n� girniz lutfen");
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
int f(int x)
{
    if(x==0)
        return 0;
    else
        return f(x-1)+x;
}
