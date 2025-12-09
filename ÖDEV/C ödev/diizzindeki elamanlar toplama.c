
#include <stdio.h>
int main() {
    int sayilar[5] = {1, 2, 3, 4, 5};
    int toplam = 0;
    int i;

    for (i = 0; i < 5; i++) {
        toplam += sayilar[i];
    }
    printf("Dizi elemanlarinin toplami: %d\n", toplam);
    return 0;
}