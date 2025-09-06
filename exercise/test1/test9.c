#include <stdio.h>

void main() {
    int jumlahTiket, totalBiaya;
    int hargaTiket = 50000;

    printf("Masukkan Jumlah tiket yang ingin dibeli (satuan): ");
    scanf("%d", &jumlahTiket);

    totalBiaya = jumlahTiket * hargaTiket;

    printf("Total Biaya dan Tiket yang didapat: %d\n", totalBiaya);
}