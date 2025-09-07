#include <stdio.h> // Library untuk fungsi input/output

int main() {
    int hargaTiket = 50000; // Harga satu tiket
    int jumlahTiket, totalBiaya, jm3, sm3, bonus; // Deklarasi variabel

    printf("Masukkan jumlah tiket yang ingin dibeli: "); // Tampilkan pesan input
    scanf("%d", &jumlahTiket); // Baca jumlah tiket dari user

    jm3 = jumlahTiket / 3;   // Hitung banyaknya paket 3 tiket (setiap beli 3, bayar 2)
    sm3 = jumlahTiket % 3;   // Hitung sisa tiket yang tidak masuk paket
    bonus = jm3;             // Setiap paket 3 tiket dapat 1 tiket bonus

    totalBiaya = (jm3 * 2 * hargaTiket) + (sm3 * hargaTiket); // Hitung total biaya (paket bayar 2, sisa bayar normal)

    printf("Total Biaya: Rp %d\n", totalBiaya); // Tampilkan total biaya
    printf("Bonus tiket: %d\n", bonus);         // Tampilkan jumlah tiket bonus
    return 0; // Akhiri program
}
