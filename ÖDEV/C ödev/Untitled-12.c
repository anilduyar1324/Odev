#include <stdio.h>

int main() {
    int N, i;
    int ilk = 0, ikinci = 1;
    int sonraki;

    printf("Kac terimli Fibonacci serisi gormek istersiniz? ");
    scanf("%d", &N);

    printf("Fibonacci Serisi:\n");

    if (N >= 1) {
        printf("%d ", ilk);
    }
    if (N >= 2) {
        printf("%d ", ikinci);
    }

    for (i = 3; i <= N; i++) {
        sonraki = ilk + ikinci;
        printf("%d ", sonraki);
        
        ilk = ikinci;
        ikinci = sonraki;
    }
    printf("\n");

    return 0;
}