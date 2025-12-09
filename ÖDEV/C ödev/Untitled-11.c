#include <stdio.h>

int main() {
    int sayi, kalan;
    long long ters_sayi = 0; 

    printf("Ters cevrilmesi istenen tam sayiyi giriniz: ");
    scanf("%d", &sayi);

    int orjinalSayi = sayi;

    while (sayi != 0) {
        kalan = sayi % 10;
        ters_sayi = ters_sayi * 10 + kalan; 
        sayi = sayi / 10;
    }

    printf("%d sayisinin tersi: %lld\n", orjinalSayi, ters_sayi);

    return 0;
}