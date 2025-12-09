#include <stdio.h>
int main() {
    int sayilar[6] = {5, 8, 1, 9, 3, 7};
    int i;
    int en_buyuk = sayilar[0];

    for (i = 1; i < 6; i++) {
        if (sayilar[i] > en_buyuk) {
            en_buyuk = sayilar[i];
        }
    }
    printf("Dizideki en buyuk eleman: %d\n", en_buyuk);
    return 0;
}