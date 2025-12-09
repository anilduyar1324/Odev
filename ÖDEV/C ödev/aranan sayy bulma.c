#include <stdio.h>
int main() {
    int sayilar[5] = {11, 22, 33, 44, 55};
    int aranan = 33;
    int i;
    int bulundu = 0;

    for (i = 0; i < 5; i++) {
        if (sayilar[i] == aranan) {
            bulundu = 1;
            break;
        }
    }

    if (bulundu) {
        printf("%d degeri dizide bulundu.\n", aranan);
    } else {
        printf("%d degeri dizide bulunamadi.\n", aranan);
    }
    return 0;
}