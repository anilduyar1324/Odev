#include <stdio.h>

int main() {
    int toplam = 0;
    int sayi;

    printf("Toplanacak bir sayi giriniz (Bitirmek icin 0 girin): ");
    scanf("%d", &sayi);

    while (sayi != 0) {
        toplam = toplam + sayi;
        printf("Toplanacak yeni bir sayi giriniz (Bitirmek icin 0 girin): ");
        scanf("%d", &sayi);
    }

    printf("Girdiginiz sayilarin toplami: %d\n", toplam);

    return 0;
}