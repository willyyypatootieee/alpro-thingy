#include <stdio.h>

void main() {
    int hasil, nilaiSuhu;


    printf("Masukkan nilai suhu dalam celcius: \n");
    hasil = scanf("%d", &nilaiSuhu);

    if ( hasil != 1 ) {
        printf("Input tidak valid! nilai suhu harus berupa bilangan bulat!\n");
    } else {
        if ( nilaiSuhu < 0 ) {
            printf("benda tersebut adalah benda padat");
        } else if ( nilaiSuhu <= 100 ) {
            printf("Benda tersebut adalah benda cair");
        } else {
            printf("Benda tersebut adalah gas");
        }
    }
}