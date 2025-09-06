#include <stdio.h>

void main() {
        int bilangan;
    printf("Aplikasi Mengecek bilangan ganjil atau genap\n");



    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0 ) {
        printf("bilangan %d adalah bilangan genap\n", bilangan);
    
    } else {
        printf("bilangan %d adalah bilangan ganjil\n", bilangan);
    } 
    printf("Program selesai\n");
}