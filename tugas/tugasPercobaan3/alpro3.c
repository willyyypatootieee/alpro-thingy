#include <stdio.h>

void main() {
    int jmTiket, jm3, sm3, totalBiaya, totalDapat, bonus;
    int hargaTiket = 5000;
    printf("Masukkan Jumlah Tiket yang Ingin dibeli: " );
    scanf("%d", &jmTiket);

    jm3 = jmTiket / 3;
    sm3 = jmTiket % 3;
    bonus = jm3;
    
    totalBiaya = (jm3 * hargaTiket * 3) + (sm3 * hargaTiket);


    printf("Total Biaya: %d\n", totalBiaya);
    printf("Total Tiket yang Didapat: %d\n", bonus);
}