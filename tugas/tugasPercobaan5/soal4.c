#include <stdio.h>

void main() {
    int nilaiAngka;


    printf("Masukkan Nilai Ujian: \n");
    scanf("%d", &nilaiAngka);

    if ( nilaiAngka <= 40 ) {
        printf("E");
    } else if ( nilaiAngka <= 55  ) {
        printf("D");
    } else if ( nilaiAngka <= 60  ) {
        printf("C");
    } else if ( nilaiAngka <= 80  ) {
        printf("B");
    } else if ( nilaiAngka <= 100  ) {
        printf("A");
    } else {
        printf("Nilai Invalid");
    }

}