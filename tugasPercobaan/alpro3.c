#include <stdio.h>


int main() {

    int a;
    int b;

    printf("masukkan nilai yang anda inginkan untuk a: ");
    scanf("%d", &a);
    printf("masukkan nilai yang anda inginkan untuk b: ");
    scanf("%d", &b);

    int jumlah = a + b;
    printf("Jumlah: %d\n", jumlah);
}