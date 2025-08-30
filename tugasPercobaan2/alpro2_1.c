#include <stdio.h>

void main() {
    int uangDolar;
    float uangRupiah;

    printf("Masukkan uang dolar untuk dikonversi dalam rupiah: ");
    scanf("%d", &uangDolar);

    uangRupiah = uangDolar * 11090;
    printf("Hasil konversi: %.2f rupiah\n", uangRupiah);

}