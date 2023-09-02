int main()
{
    printf("--------------------Soru2--------------\n");
    int a=5, b=6;

    int* xptr;
    int* yptr;
    int sum;

    xptr= &a;
    yptr= &b;

    sum= *xptr + *yptr;

    printf("Toplam: %d\n", sum);

    return 0;
}
