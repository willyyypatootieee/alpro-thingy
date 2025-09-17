#include <stdio.h>

int main() {
    int tahun, total;
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);
    total = 365 * tahun;
    printf("hasiil dari tahun yang telah di hitung adalah %d hari\n", total);
}