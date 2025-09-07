#include <stdio.h>

int main() {
    int uts, uas;
    float rata;

    printf("Masukkan nilai UTS: ");
    scanf("%d", &uts);
    printf("Masukkan nilai UAS: ");
    scanf("%d", &uas);

    // LENGKAPI: rumus rata-rata
    rata = ( uts + uas ) / 2.0;

    printf("Rata-rata = %.2f\n", rata);

    // LENGKAPI: cek kelulusan
    if ( rata >= 60  ) {
        printf("LULUS\n");
    } else {
        printf("TIDAK LULUS\n");
    }

    return 0;
}
