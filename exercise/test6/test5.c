#include <stdio.h>

int main() {
    float n1, n2, n3, rata;

    printf("Masukkan nilai 1: ");
    scanf("%f", &n1);
    printf("Masukkan nilai 2: ");
    scanf("%f", &n2);
    printf("Masukkan nilai 3: ");
    scanf("%f", &n3);

    rata = ( n1 + n2 + n3 ) / 3.0;   // LENGKAPI

    if ( rata >= 60 ) {  // LENGKAPI
        printf("LULUS\n");
    } else {
        printf("TIDAK LULUS\n");
    }

    return 0;
}
