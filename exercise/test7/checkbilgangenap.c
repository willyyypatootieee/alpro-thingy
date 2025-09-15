#include <stdio.h>

int main() {
    int n;
    printf("Masukkan bilangan bulat : \n");
    scanf("%d", &n);

    if ( n % 2 == 0 ) {
        printf("bilangan adalah genap");
        
    } else {
        printf("bilangan adalah ganjil");
    }
}