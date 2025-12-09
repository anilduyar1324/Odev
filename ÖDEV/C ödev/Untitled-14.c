#include <stdio.h>

int main() {
    int A, B, kalan, ebob;

    printf("EBOB'u bulunacak iki pozitif tam sayi giriniz:\n");
    scanf("%d %d", &A, &B);

    int tempA = A;
    int tempB = B;

    
    while (tempB != 0) {
        kalan = tempA % tempB;
        tempA = tempB;
        tempB = kalan;
    }
    
    ebob = tempA;

    printf("%d ve %d sayilarinin EBOB'u: %d\n", A, B, ebob);

    return 0;
}