#include <stdio.h>

int main() {
    int bil;

    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    // LENGKAPI: logika cek positif/negatif/nol
    if ( bil >= 0 ) {
        printf("Bilangan positif\n");
    } else if ( bil <= 0 ) {
        printf("Bilangan negatif\n");
    } else {
        printf("Bilangan nol\n");
    }

    return 0;
}
