#include <stdio.h>


void main() {
int jumlah_uang, ratusanRibu, limaPuluhRibu, duaPuluhRibu, sepuluhRibu, limaRibu, duaRibu, seribu;


   printf("Masukkan Jumlah Uang: ");
   scanf("%d", &jumlah_uang);

    ratusanRibu = jumlah_uang / 10000;
    jumlah_uang = jumlah_uang % 10000;


    // pecahan 50000
    limaPuluhRibu = jumlah_uang / 50000;
    jumlah_uang = jumlah_uang % 50000;

    // pecahan 20000
    duaPuluhRibu = jumlah_uang / 20000;
    jumlah_uang = jumlah_uang % 20000;

    // pecahan 10000
    sepuluhRibu = jumlah_uang / 10000;
    jumlah_uang = jumlah_uang % 10000;

    // pecahan 5000
    limaRibu= jumlah_uang / 5000;
    jumlah_uang = jumlah_uang % 5000;

    // pecahan 2000
    duaRibu = jumlah_uang / 2000;
    jumlah_uang = jumlah_uang % 2000;

    // pecahan 1000
    seribu = jumlah_uang / 1000;
    jumlah_uang = jumlah_uang % 1000;

    printf("\nHasil pecahan uang:\n");
    printf("100000 : %d lembar\n", ratusanRibu);
    printf("50000  : %d lembar\n", limaPuluhRibu);
    printf("20000  : %d lembar\n", duaPuluhRibu);
    printf("10000  : %d lembar\n", sepuluhRibu);
    printf("5000   : %d lembar\n", limaRibu);
    printf("2000   : %d lembar\n", duaRibu);
    printf("1000   : %d lembar\n", seribu);
    if (jumlah_uang > 0) {
        printf("Sisa uang tidak bisa dipecah: %d rupiah\n", jumlah_uang);
    }
}