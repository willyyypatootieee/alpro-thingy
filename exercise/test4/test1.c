#include <stdio.h>

void main () {
    int ayam;
    
    printf("Masukkan jumalah ayam: ");
    scanf("%d", &ayam);

    if ( ayam % 2 == 0 ) {
        printf("Ayam berjumlah genap\n");
        
    } else {
        printf("Ayam berjumlah ganjil\n");
    }
}