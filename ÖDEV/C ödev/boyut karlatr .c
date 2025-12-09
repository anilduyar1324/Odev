#include <stdio.h>
int main() {
    int sayilar[6] = {1, 2, 3, 4, 5, 6};
    int boyut = 6;
    int i, gecici;

    printf("Orijinal Dizi: ");
    for (i = 0; i < boyut; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    for (i = 0; i < boyut / 2; i++) {
        gecici = sayilar[i];
        sayilar[i] = sayilar[boyut - 1 - i];
        sayilar[boyut - 1 - i] = gecici;
    }

    printf("Ters Cevrilmis Dizi: ");
    for (i = 0; i < boyut; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");
    return 0;
}