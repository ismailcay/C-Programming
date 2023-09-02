#include <stdio.h>
#include "recursionUtil.h"
long fibonacci(long n){
if (n == 0 || n == 1)
return n;
else
return fibonacci(n - 1) + fibonacci(n - 2);
}
int fibonacciMain(void){
long i, n;
printf("How many fibonacci numbers?:");
scanf("%d", &n);
for (i = 1; i <= n ; i++){
printf("Number %d: %ld\n", i, fibonacci(i));
}
return 0;
}

