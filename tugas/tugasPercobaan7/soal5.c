#include <stdio.h>

void main() {
    int n, i, prima = 1;

    printf("Masukkna bilangan : ");
    scanf("%d", &n);


    if ( n <=1 ) {
        prima = 0;

    } else {
        for (i =2; i <= n / 2; i++) {
            if ( n % i == 0) {
                prima = 0;
                break;
            }
        }
    }
    if (prima == 1 ) {
        printf("%d adalah bilangan prima", n);

    } else {
        printf("%d bukan bilangan prima", n);
    }
}