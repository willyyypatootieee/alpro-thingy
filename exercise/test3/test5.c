#include <stdio.h>

int main() {
    int a, b, hasil = 0;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    // LENGKAPI: gunakan loop untuk menjumlahkan a sebanyak b kali
    for (int i = 0; i < b; i++) {
        hasil += a;
    }

    printf("Hasil perkalian = %d\n", hasil);
    return 0;
}
