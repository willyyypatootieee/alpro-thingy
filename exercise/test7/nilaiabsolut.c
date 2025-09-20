#include <stdio.h>

int main() {
    int n, nilai_absolut;

    printf("Masukkan bilangan:  ");
    scanf("%d", &n);

    if ( n >= 0 ) {
        nilai_absolut = n;
    } else {
        nilai_absolut = -n;
    }

    printf("Nilai absolut dari %d adalah %d\n", n, nilai_absolut);  
}