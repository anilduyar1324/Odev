
#include <stdio.h>
int main() {
    int sayilar[4] = {10, 20, 30, 40};
    int toplam = 0;
    int i;
    float ortalama;
    int boyut = 4;

    for (i = 0; i < boyut; i++) {
        toplam += sayilar[i];
    }

    ortalama = (float)toplam / boyut; // float'a dönüştürme önemli
    printf("Dizi elemanlarinin ortalamasi: %.2f\n", ortalama);
    return 0;
}