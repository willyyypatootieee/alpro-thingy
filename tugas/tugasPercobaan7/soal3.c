#include <stdio.h>


void main() {
    char c;
    int count = 0;

    for (c = 65 ; c<= 90 ; c++ ) {
        printf("huruf %c |", c);

        count++;
        if (count % 5 ==  0) {
            printf("\n");
        }
    }


}