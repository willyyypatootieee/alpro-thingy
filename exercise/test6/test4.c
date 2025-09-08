#include <stdio.h>

int main() {
    int jam, detik;

    printf("Masukkan jumlah jam: ");
    scanf("%d", &jam);

    detik = jam * 3600 ;   // LENGKAPI

    printf("%d jam = %d detik\n", jam, detik);
    return 0;
}
