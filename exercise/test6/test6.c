#include <stdio.h>

void main(int argc, char *argv[]) {
    int angka;
    char huruf;

    printf("Masukkan angka: \n");
    scanf("%d", &angka);

    printf("Masukkan huruf: \n");
    scanf(" %c", &huruf);

    printf("Anda memasukkan angka %d dan huruf %c\n", angka, huruf);

}