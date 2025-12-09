#include <stdio.h>
int main() {
    int sayilar[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Onceki Elemanlar: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        sayilar[i] = sayilar[i] * 2;
    }

    printf("Sonraki Elemanlar: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");
    return 0;
}