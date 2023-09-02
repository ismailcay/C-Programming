int main()
{
    printf("--------------------Soru3--------------\n");
    //////// BU SORUDA ÝÞARETLÝ YERE BAK------------------------------------------------------------////////////////////
    int i,count;
    //int *arrptr;
    int arr[5]={5,7,2,9,8};
    printf("The elements you entered are :\n");
    for(i=0; i<5; i++){
        //arrptr = &arr[i];
        //count= *arrptr;
        printf("element - %d : %d\n", i,*(arr+i));//ÝÞARETLÝ YER/////
    }



    return 0;
}
