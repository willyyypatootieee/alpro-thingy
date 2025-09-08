#include <stdio.h>

int main() {
    // Deklarasi variabel
    int angkaBulat = 100;        // Variabel integer
    float angkaPecahan = 12.34;  // Variabel float
    char satuKarakter = 'A';     // Variabel char

    // Cetak isi dan ukuran memori variabel int
    printf("Variabel angkaBulat:\n");
    printf("  Isi: %d\n", angkaBulat);
    printf("  Ukuran memori: %zu bytes\n\n", sizeof(angkaBulat));

    // Cetak isi dan ukuran memori variabel float
    printf("Variabel angkaPecahan:\n");
    printf("  Isi: %f\n", angkaPecahan);
    printf("  Ukuran memori: %zu bytes\n\n", sizeof(angkaPecahan));

    // Cetak isi dan ukuran memori variabel char
    printf("Variabel satuKarakter:\n");
    printf("  Isi: %c\n", satuKarakter);
    printf("  Ukuran memori: %zu bytes\n", sizeof(satuKarakter));

    return 0;
}