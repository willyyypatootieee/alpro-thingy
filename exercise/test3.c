#include <stdio.h>

void main()  {
    char nama[100];
    int umur;

    printf("Masukkkan nama: ");
    scanf("%s", &nama);

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Hai %s, umur kamu adalah %d tahun\n", nama, umur);

}