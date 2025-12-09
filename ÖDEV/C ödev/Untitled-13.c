#include <stdio.h>

 int main() {
    int sayi, i;

    printf("Asal sayi kontrolu icin bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi <= 1) {
        is_asal = false;
    } else {
       
        for (i = 2; i <= (sayi); i++) { 
            if (sayi % i == 0) {
                is_asal = false;
                break;
            }
        }
    }

    if (is_asal) {
        printf("%d Asal Sayidir.\n", sayi);
    } else {
        printf("%d Asal Sayi Degildir.\n", sayi);
    }

    return 0;
}