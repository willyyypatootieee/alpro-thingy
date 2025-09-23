#include <stdio.h>

void main() {
    int testAkademik, testKetrampilan, testPsikologi, hasil;

    printf("Masukkan nilai test akademik: \n");
    scanf("%d", &testAkademik);

    printf("Masukkan nilai test ketrampilan: \n");
    scanf("%d", &testKetrampilan);

    printf("Masukkan nilai test psikologi: \n");
    scanf("%d", &testPsikologi);

    hasil = (testAkademik + testKetrampilan + testPsikologi) / 3;

    if ( hasil >= 75) {
            if ( testAkademik >= testKetrampilan && testAkademik >= testPsikologi)
        printf("Anda Di Tempatkan Di Bagian Administrasi");
        else if ( testKetrampilan >= testAkademik && testKetrampilan >= testPsikologi)  {
            printf("Anda Di Tempatkan Di Bagian Produksi");
        } else {
            printf("Anda Di Tempatkan Di Bagian Pemasaran");
        }
    } else {
        printf("Maaf anda tidak lulus seleksi");
    }
}


