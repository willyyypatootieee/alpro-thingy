#include <stdio.h>

void main() {
    int a, b, c;
    int jumlah;

    printf("masukkan bilangan pertama: ");
    scanf("%d", &a);

    printf("masukkan bilangan kedua: ");
    scanf("%d", &b);
    printf("masukkan bilangan ketiga: ");
    scanf("%d", &c);

    jumlah = a + b + c;

    printf("Hasil Penjumlahan dari %d + %d + %d = %d\n", a, b, c, jumlah);
}