#include <stdio.h>

void main() {
    int jumlahUang, ratusanRibu, limaPuluhRibu, duaPuluhRibu;
    
    printf("Masukkan nilai mata uang: ");
    scanf("%d", &jumlahUang);

    ratusanRibu = jumlahUang / 100000;
    jumlahUang = jumlahUang % 100000;

    limaPuluhRibu = jumlahUang / 50000;
    jumlahUang = jumlahUang % 50000;

    duaPuluhRibu = jumlahUang / 20000;
    jumlahUang = jumlahUang % 20000;

    printf("Hasil Pecahan Uang: \n");
    printf("===================\n");
    printf("100000 : %d Lembar\n", ratusanRibu);
    printf("50000  : %d Lembar\n", limaPuluhRibu);
    printf("20000 : %d Lembar\n", duaPuluhRibu);

    if (jumlahUang > 0) {
        printf("Sisa uang tidak bisa dipecah: %d rupiah\n", jumlahUang);
    }

}