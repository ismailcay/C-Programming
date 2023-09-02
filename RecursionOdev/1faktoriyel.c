#include <stdio.h>
#include "recursionUtil.h"
long fac (long n){
    if (n<=1){
        return 1;
    } else{
        return (n*fac(n-1));
    }
}

int faktoriyelMain(void)
{
    int i,max;
    printf("Faktoriyel hesaplamasi icin bir sayi giriniz:\n");
    scanf("%d", & max);

   for(i=0; i<=max; i++){
    printf("%d! = %d\n",i,fac (i) );

   }
    return 0;
}
