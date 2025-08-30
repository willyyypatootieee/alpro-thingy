#include <stdio.h>

void main(){
    int x;
    x = ( 2 + 3 ) - 10 *2;
    printf("Hasil 1: x = %d\n", x);

    x = ( 2 + 3 ) - ( 10 * 2 );
    printf("Hasil 2: x = %d\n", x);

    x = 10 % 3 * 2 + 1;
    printf("Hasil 3: x = %d\n", x);
}