#include <stdio.h>
int main() {
    char isim[] = "Merhaba";
    printf("String: %s\n", isim);
    printf("Stringin ilk harfi: %c\n", isim[0]);

    int i = 0;
    while (isim[i] != '\0') {
        printf("%c", isim[i]);
        i++;
    }
    printf("\n");
    return 0;
}