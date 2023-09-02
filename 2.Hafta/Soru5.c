#include<stdio.h>

//soru5
void swapNumbers(int *x,int *y,int *z);
int main()
{

    int e1,e2,e3;

    e1=5,e2=6,e3=7;

    int *ptr1,*ptr2,*ptr3;

    ptr1=&e3;

    ptr2=&e1;

    ptr3=&e2;

    printf("The value before swapping are :\n");
    printf("element 1: %d\n", e1);
    printf("element 2: %d\n", e2);
    printf("element 3: %d\n", e3);
    printf("The value after swapping are :\n");
    printf("element 1: %d\n", *ptr1);
    printf("element 2: %d\n", *ptr2);
    printf("element 3: %d\n", *ptr3);

    return 0;
}
