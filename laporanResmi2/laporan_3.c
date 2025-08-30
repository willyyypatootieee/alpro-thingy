#include <stdio.h>
#include <math.h>


int main() {
    float a, b, c, z, y;
    int x;

    printf("Masukkan nilai a, b, c, x, z: ");
    scanf("%f, %f, %f, %d, %f", &a, &b, &c, &x, &z);

    y = b * (x, x) + 0.5 * x - c;    
    printf("Hasil persamaan (1): y = %.2f\n", y);

    y = (0.3 * x * z) / (2 * a);
    printf("Hasil persamaan (2): y = %.2f\n", y);

}