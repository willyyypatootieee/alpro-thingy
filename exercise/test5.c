#include <stdio.h>

void main() {
    int a = 12;
    int b = 2;
    int c = 3;
    int d = 4;
    int jumlah1, jumlah2, jumlah3, jumlah4;

    jumlah1 = a % b;
    jumlah2 = a - c;
    jumlah3 = a + b;
    jumlah4 = a / d;
    
    printf("Hasil Modulus dari %d %% %d = %d\n", a, b, jumlah1);
    printf("Hasil Pengurangan dari %d - %d = %d\n", a, c, jumlah2);
    printf("Hasil Penjumlahan dari %d + %d = %d\n", a, b, jumlah3);
    printf("Hasil Pembagian dari %d / %d = %d\n", a, d, jumlah4);

}