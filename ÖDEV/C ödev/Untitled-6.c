#include <stdio.h>

int main() {
    int A, B, C;

    printf("Uc farkli tam sayi giriniz:\n");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C) {
        printf("En buyuk sayi: %d\n", A);
    } else if (B >= A && B >= C) {
        printf("En buyuk sayi: %d\n", B);
    } else {
        printf("En buyuk sayi: %d\n", C);
    }

    return 0;
}