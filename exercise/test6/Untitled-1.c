#include <stdio.h>


void main() {
    int totalTahun, tahun;

    printf("Masukkan total tahun: ");
    scanf("%d", &tahun);

    totalTahun = tahun * 12;
    printf("Total bulan: %d\n", totalTahun);
} 