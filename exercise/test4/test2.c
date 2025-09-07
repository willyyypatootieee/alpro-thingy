#include <stdio.h>

void main() {
    char nama[100];
    float totalBelanja;

    printf("Masukkan nama pembeli: ");
    scanf("%s", nama);

    printf("Masukkan total belanja: ");
    scanf("%f", &totalBelanja);

    printf("Pembeli atas nama %c, membeli barang seharga %.2f\n", nama, totalBelanja);
    



}