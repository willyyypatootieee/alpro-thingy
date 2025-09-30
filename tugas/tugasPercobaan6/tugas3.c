#include <stdio.h>
#define PHI 3.14

void main() {
    int pilihan, sisi, tinggi, volKubus;
    float luasLingkaran, jariJariSilinder;
    float jariJari;

    printf("\n Pilih Rumus Yang Ingin Di Gunakan: \n");
    printf("========================================\n");
    printf("1. Menghitung Volume Kubus\n");
    printf("2. Menghitung Luas Lingkaran\n");
    printf("3. Menghitung Volume Silinder\n");
    printf("Masukkan Pilihan (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        // Menghitung Volume Kubus
        case 1:
            printf("Masukkan Panjang Sisi: \n");
            scanf("%d", &sisi);
            volKubus = sisi * sisi * sisi;
            printf("Volume Kubus dengan sisi %d adalah %d\n", sisi, volKubus);
            break;

        // Menghitung Luas Lingkaran
        case 2:
            printf("Masukkan Jari-Jari: \n");
            scanf("%f", &jariJari);
            luasLingkaran = PHI * jariJari * jariJari;
            printf("Luas Lingkaran dengan jari-jari %.2f adalah %.2f\n", jariJari, luasLingkaran);
            break;

        // Menghitung Volume Silinder
        case 3:
            printf("Masukkan Jari Jari Silinder: \n");
            scanf("%f", &jariJari);
            printf("Masukkan Tinggi Silinder: \n");
            scanf("%d", &tinggi);
            jariJariSilinder = PHI * jariJari * jariJari * tinggi;
            printf("Volume Silinder = %.2f\n", jariJariSilinder);
            break;
    
        default:
            printf("Pilihan tidak valid! Silakan pilih antara 1-3.\n");
            break;
    }
}
