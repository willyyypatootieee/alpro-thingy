#include <stdio.h>


int main() {

    float a;
    float b = 50.0;

    printf("masukkan nilai yang anda inginkan untuk a: ");
    scanf("%f", &a);

    float jumlah = a * b;
    printf("Jumlah: %.f\n", jumlah);
}