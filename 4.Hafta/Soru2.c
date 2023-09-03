#include <stdio.h>
#include <stdlib.h>
#define MAX 7
//-----------------------------SORU2-KABARCIK----------
void kabarcik (int arr[]);
int main()
{

    int arr [MAX]={5,7,1,6,4,3,2};

    kabarcik(arr);
    secimSiralama(arr);

    return 0;
}


void kabarcik (int arr[]){

int count,i,temp,k;
printf("Normal siralama:\n");
for(i=0; i<MAX;i++){
        printf(" %d ", arr[i]);
}
    for(i=0; i<MAX; i++){
        for(k=0; k<MAX-1; k++){
            if (arr[k]>arr[k+1]){
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;

            }
        }
}

    printf("\nDuzenlenmis siralama:\n");
    for(i=0; i<MAX;i++){
        printf(" %d ", arr[i]);

    }

}

void secimSiralama (int arr []){
int i,k,count;

for(i=0; i<MAX; i++){
    for(k=0; k<MAX; k++)
    if(arr[k]<arr[k+1]){
        count=arr[k];
       // printf("deneme; %d\n", count);
    }

}


}
