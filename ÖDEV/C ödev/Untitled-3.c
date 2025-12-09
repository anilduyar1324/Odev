#include <stdio.h>

int main() {
    float vize, final, ortalama;

    printf("Lutfen vize notunuzu giriniz: ");
    scanf("%f", &vize);

    printf("Lutfen final notunuzu giriniz: ");
    scanf("%f", &final);

    // Ortalama hesaplama: (vize * %40) + (final * %60)
    ortalama = (vize * 0.4) + (final * 0.6);

    printf("Not ortalamaniz: %.2f\n", ortalama);

    if (ortalama >= 50.0) {
        printf("Gectiniz!\n");
    } else {
        printf("Kaldiniz!\n");
    }

    return 0;
}