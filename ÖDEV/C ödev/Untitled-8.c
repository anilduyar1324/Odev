#include <stdio.h>

int main() {
    char op; 
    double A, B; 

    printf("Bir islem giriniz (ornegin: 5 + 3, 4 * 2): ");
    scanf("%lf %c %lf", &A, &op, &B); 

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", A, B, A + B);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", A, B, A - B);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", A, B, A * B);
            break;
        case '/':
            if (B != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", A, B, A / B);
            } else {
                printf("Hata: Sifira bolme yapilamaz.\n");
            }
            break;
        default:
            printf("Hata: Gecersiz operator.\n");
    }

    return 0;
}