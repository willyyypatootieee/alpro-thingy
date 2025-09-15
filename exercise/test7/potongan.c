#include <stdio.h>

int main() {
    float total, potongan = 0;
    printf("Masukkan total belanja: \n");
    scanf("%f", &total);

    if ( total > 100000 ) {
        potongan = total * 0.05;

    }

    printf("total pembelian adalah %.2f\n", total);
    printf("potongan harga %.2f\n", potongan);

    
}