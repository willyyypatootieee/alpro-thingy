#include <stdio.h>

void main() {
    int a = 12;
    int b = 2;
    int c = 3;
    int d = 4;

    int operasiVariable1 = a % b;
    int operasiVariable2 = a - c;
    int operasiVariable3 = a + b;
    int operasiVariable4 = a / d;
    int operasiVariable5 = a / d * d + a % d;
    int operasiVariable6 = a % d / d * a - c;

    printf("Hasil Operasi Variable a %% b adalah: %d\n", operasiVariable1);
    printf("Hasil Operasi Variable a - b adalah: %d\n", operasiVariable2);
    printf("Hasil Operasi Variable a + b adalah: %d\n", operasiVariable3);
    printf("Hasil Operasi Variable a / b adalah: %d\n", operasiVariable4);
    printf("Hasil Operasi Variable a / d * d + a & d adalah: %d\n", operasiVariable5);
    printf("Hasil Operasi Variable a %% d / d *a - c adalah: %d\n", operasiVariable6);





}