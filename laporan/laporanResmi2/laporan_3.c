#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, z, y; // Deklarasi variabel bertipe float
    int x; // Deklarasi variabel bertipe integer

    // Meminta user memasukkan nilai a, b, c, x, dan z
    printf("Masukkan nilai a, b, c, x, z: ");
    scanf("%f, %f, %f, %d, %f", &a, &b, &c, &x, &z);

    // Menghitung nilai y berdasarkan persamaan pertama
    // Catatan: b * (x, x) seharusnya b * x * x jika ingin menghitung b * x^2
    y = b * (x, x) + 0.5 * x - c;    
    printf("Hasil persamaan (1): y = %.2f\n", y);

    // Menghitung nilai y berdasarkan persamaan kedua
    y = (0.3 * x * z) / (2 * a);
    printf("Hasil persamaan (2): y = %.2f\n", y);

}