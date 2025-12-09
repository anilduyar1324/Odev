#include <stdio.h>

int main() {
    int yas;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    if (yas >= 18) {
        printf("Ehliyet Alabilirsin\n");
    } else {
        printf("Ehliyet Alamazsin\n");
    }

    return 0;
}