#include <stdio.h>

int main() {
    printf("Biodata Mahasiswa\n");
    printf("============================\n");

    char nama[50], nim[20], fakultas[60], jurusan[60], asalKota[60], alamat[200];

    printf("Nama: ");
    gets(nama);

    printf("NIM: ");
    gets(nim);

    printf("Fakultas: ");
    gets(fakultas);

    printf("Jurusan: ");
    gets(jurusan);

    printf("Asal Kota: ");
    gets(asalKota);

    printf("Alamat: ");
    gets(alamat);

    printf("Data Mahasiswa\n");
    printf("============================\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Fakultas: %s\n", fakultas);
    printf("Jurusan: %s\n", jurusan);
    printf("Asal Kota: %s\n", asalKota);
    printf("Alamat: %s\n", alamat);
    printf("Data Tersimpan!\n");

}