#include <stdio.h>

int main() {
    int sayi;

    printf("Lutfen bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0) {
        printf("Sayi Cifttir\n");
    } else {
        printf("Sayi Tektir\n");
    }

    return 0;
}