#include <stdio.h>

void main() {
    int a, b, c;

    /* inisialisasi dengan tipe data float*/
    float d;

    printf("masukkan bilangan pertama: ");
    scanf("%d", &a);

    printf("masukkan bilangan kedua: ");
    scanf("%d", &b);

    printf("masukkan bilangan ketiga: ");
    scanf("%d", &c);

    d = (b * b) - (4 * a * c);
    /* mengkonversi */

    printf("Nilai Diskiriman (D) = %.2f\n",d);

}