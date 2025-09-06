#include <stdio.h>

int main () {
    char nama[50];
    int umur;

    printf("Nama: ");
    scanf("%s", nama);

    printf("Umur: ");
    scanf("%d", &umur);

    printf("Halo %s, umurmu %d tahun\n", nama, umur);
}
