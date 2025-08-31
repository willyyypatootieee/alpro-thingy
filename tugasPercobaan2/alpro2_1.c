/*
    Program ini meminta pengguna memasukkan jumlah uang dalam dolar,
    lalu mengkonversinya ke rupiah dengan kurs tetap 1 dolar = 11090 rupiah.
    Penggunaan '&' pada scanf berfungsi untuk mengambil alamat memori variabel
    agar nilai input dapat disimpan ke variabel tersebut.
*/
#include <stdio.h>

void main() {
    int uangDolar;
    float uangRupiah;

    printf("Masukkan uang dolar untuk dikonversi dalam rupiah: ");
    scanf("%d", &uangDolar);

    uangRupiah = uangDolar * 11090;
    printf("Hasil konversi: %.2f rupiah\n", uangRupiah);

}