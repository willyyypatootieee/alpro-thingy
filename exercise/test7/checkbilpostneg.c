#include <stdio.h>

int main() {
    int n;
    printf("Masukkan bilangan:  \n");
    scanf("%d", &n);

    if ( n >= 0 ) {
        printf("bilangan %d adalah bilangan positif\n", n);

    } else {
        printf("bilangan %d adalah bilangan negatif\n", n);
    }
}