#include <stdio.h>

int main() {
    float harga;

    printf("Masukkan harga: ");
    scanf("%f", &harga);   // salah specifier

    printf("Harga : Rp %8.2f\n", harga);  // salah specifier
}
