#include <stdio.h>
#include "recursionUtil.h"
double ustelFonksiyon(double taban, int us) {
    if (us == 0)
        return 1;
    else if (us > 0)
        return taban * ustelFonksiyon(taban, us - 1);
    else
        return (1.0 / taban) * (taban, us + 1);
}

int usluSayiMain() {
    double taban;
    int us;
    printf("Sayi tabanini ve kuvvetini giriniz: ");
    scanf("%lf %d", &taban, &us);

    double sonuc = ustelFonksiyon(taban, us);
    printf("%.2lf^%d = %.2lf\n", taban, us, sonuc);

    return 0;
}
