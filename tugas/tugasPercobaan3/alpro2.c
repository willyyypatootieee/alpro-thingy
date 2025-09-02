#include <stdio.h>

void main() {
    int gajiPokok, jumlahAnak, masaKerja, hariMasukKerja;
    int tunjanganAyahIbu, tunjanganAnak, pajak;
    int thr, transport, asuransi = 20000;
    float hasilKeseluruhan;

    printf("Masukkan gaji pokok: ");
    scanf("%d", &gajiPokok);
    printf("Masukkan jumlah anak: ");
    scanf("%d", &jumlahAnak);
    printf("Masukkan masa kerja (tahun): ");
    scanf("%d", &masaKerja);
    printf("Masukkan jumlah hari masuk kerja: ");
    scanf("%d", &hariMasukKerja);

    tunjanganAyahIbu = 0.10 * gajiPokok;
    tunjanganAnak = 0.05 * gajiPokok * jumlahAnak;
    thr = 5000 * masaKerja;
    transport = 3000 * hariMasukKerja;
    pajak = 0.15 * (gajiPokok + tunjanganAyahIbu + tunjanganAnak);

    hasilKeseluruhan = gajiPokok + tunjanganAyahIbu + tunjanganAnak + thr + transport - pajak - asuransi;


    printf("Total pendapatan bulanan: %.5f\n", hasilKeseluruhan);


}
