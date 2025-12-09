#include <stdio.h>

int main() {
    int sayi, kalan;
    int toplam = 0;

    printf("Rakamlari toplanacak pozitif bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    int orjinalSayi = sayi; 

    while (sayi > 0) {
        kalan = sayi % 10; // Son rakami al (Mod islemi)
        toplam = toplam + kalan; // Toplama ekle
        sayi = sayi / 10; // Son rakami at (Bolme islemi)
    }

    printf("%d sayisinin rakamlari toplami: %d\n", orjinalSayi, toplam);

    return 0;
}