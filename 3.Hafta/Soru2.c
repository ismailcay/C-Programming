#include<stdio.h>
#define MAX 10
int main ()
{
    int i;
    char adSoyad[MAX]="ismail cay";
    char* ptr;

    ptr=(char*) malloc (MAX*sizeof(char));


    strcpy(ptr,adSoyad);

    for(i=0; i<MAX; i++){

    printf("%c", ptr[i]);

    }
    printf("\n");
    for(i=0; i<MAX; i++){

    printf("%d\n", ptr[i]);

    }

    printf("%s\n", ptr);

    free(ptr);
    return 0;



}
