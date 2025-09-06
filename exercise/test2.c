#include <stdio.h>

void main() {
    int awal;
    int akhir;
    int jumlah = 0;

    printf("Masukkan bilanngan pertama: ");
    scanf("%d", &awal);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &akhir);

    for (int i=awal; i <= akhir; i++) {
        jumlah += i;
    }
    printf("Jumlah bilangan dari %d sampai %d adalah %d\n", awal, akhir, jumlah);

}