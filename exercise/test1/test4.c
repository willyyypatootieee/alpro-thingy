#include <stdio.h>

void main() {
    int a;
    int b;
    int jumlah;



    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
        jumlah = a + b;

    printf("Hasil Penjumlahan dari %d + %d = %d\n", a, b, jumlah);
}