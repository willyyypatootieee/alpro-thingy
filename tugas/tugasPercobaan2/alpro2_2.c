#include <stdio.h>

// Program untuk menghitung jumlah lembar pecahan uang dari jumlah uang tertentu

void main() {
    int jumlah_uang, ratusanRibu, limaPuluhRibu, duaPuluhRibu, sepuluhRibu, limaRibu, duaRibu, seribu;

    // Meminta input jumlah uang dari user
    printf("Masukkan Jumlah Uang: ");
    scanf("%d", &jumlah_uang);

    // Menghitung jumlah lembar pecahan 100000
    ratusanRibu = jumlah_uang / 100000;
    jumlah_uang = jumlah_uang % 100000;

    // Menghitung jumlah lembar pecahan 50000
    limaPuluhRibu = jumlah_uang / 50000;
    jumlah_uang = jumlah_uang % 50000;

    // Menghitung jumlah lembar pecahan 20000
    duaPuluhRibu = jumlah_uang / 20000;
    jumlah_uang = jumlah_uang % 20000;

    // Menghitung jumlah lembar pecahan 10000
    sepuluhRibu = jumlah_uang / 10000;
    jumlah_uang = jumlah_uang % 10000;

    // Menghitung jumlah lembar pecahan 5000
    limaRibu = jumlah_uang / 5000;
    jumlah_uang = jumlah_uang % 5000;

    // Menghitung jumlah lembar pecahan 2000
    duaRibu = jumlah_uang / 2000;
    jumlah_uang = jumlah_uang % 2000;

    // Menghitung jumlah lembar pecahan 1000
    seribu = jumlah_uang / 1000;
    jumlah_uang = jumlah_uang % 1000;

    // Menampilkan hasil pecahan uang
    printf("\nHasil pecahan uang:\n");
    printf("100000 : %d lembar\n", ratusanRibu);
    printf("50000  : %d lembar\n", limaPuluhRibu);
    printf("20000  : %d lembar\n", duaPuluhRibu);
    printf("10000  : %d lembar\n", sepuluhRibu);
    printf("5000   : %d lembar\n", limaRibu);
    printf("2000   : %d lembar\n", duaRibu);
    printf("1000   : %d lembar\n", seribu);

    // Jika ada sisa uang yang tidak bisa dipecah
    if (jumlah_uang > 0) {
        printf("Sisa uang tidak bisa dipecah: %d rupiah\n", jumlah_uang);
    }
}