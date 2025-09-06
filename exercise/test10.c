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

    jumlah = 3*c*c - 5*c + 6;

    printf("Hasil Penjumlahan dari %d + %d + %d = %d\n", a, b, c, jumlah);
}