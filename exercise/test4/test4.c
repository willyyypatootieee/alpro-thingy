#include <stdio.h>

void main () {
    float nilai1 , nilai2, nilai3;
    float rataNilai;

    printf("Masukkan nilai mata kuliah pertama\n: ");
    scanf("%f", &nilai1);

    printf("Masukkan nilai mata kuliah kedua\n: ");
    scanf("%f", &nilai2);
    printf("Masukkan nilai mata kuliah ketiga\n: ");
    scanf("%f", &nilai3);

    rataNilai = (nilai1 + nilai2 + nilai3) / 3.0;

    printf("rata-rata nilai = %.2f\n", rataNilai);

    if ( rataNilai >= 60 ) {
        printf("LULUS\n");
    } else {
        printf("TIDAK LULUS\n");
    }


}