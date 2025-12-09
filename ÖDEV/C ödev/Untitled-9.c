#include <stdio.h>

int main() {
    int taban, us, i;
   
     sonuc = 1; 

    printf("Taban degerini giriniz: ");
    scanf("%d", &taban);

    printf("Us degerini (pozitif tam sayi) giriniz: ");
    scanf("%d", &us);
   
for (i = 0; i < us; i++) {
        sonuc = sonuc * taban;
    }

    printf("%d ussu %d = %lld\n", taban, us, sonuc);

    return 0;
}