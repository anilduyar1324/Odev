
#include <stdio.h>
int main() {
    int boyut = 3;
    int dizi[boyut];
    int i;

    printf("%d adet sayi girin:\n", boyut);
    for (i = 0; i < boyut; i++) {
        printf("Dizi[%d]: ", i);
        scanf("%d", &dizi[i]);
    }

    printf("Girilen Elemanlar: ");
    for (i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    return 0;
}