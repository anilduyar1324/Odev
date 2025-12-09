#include <stdio.h>

int main() {
    int sayi, i;
     faktoriyel = 1; 

    printf("Faktoriyeli hesaplanacak pozitif bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi < 0) {
        printf("Hata: Faktoriyel negatif sayilar icin tanimli degildir.\n");
    } else {
        for (i = 1; i <= sayi; i++) {
            faktoriyel = faktoriyel * i;
        }
        printf("%d! = %lld\n", sayi, faktoriyel);
    }

    return 0;
}