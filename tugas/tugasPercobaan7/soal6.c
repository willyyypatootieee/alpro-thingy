    #include <stdio.h>

    void main() {
        char nilai;
        int jam, i, angka, totalJam = 0, totalNilai = 0;

        for (i = 1; i <= 5; i++) {
        printf("\n--- Mata Kuliah ke-%d ---\n", i);
        printf("Masukkan Nilai Mata Kuliah (A/B/C/D/E) : ");
        scanf(" %c", &nilai);
        printf("Masukkan Jumlah Jam Mata Kuliah : ");
        scanf("%d", &jam);

            switch (nilai)
            {
            case 'A': case 'a':
                angka = 4;
                break;
            case 'B': case 'b':
                angka = 3;
                break;
            case 'C': case 'c':
                angka = 2;
                break;
            case 'D': case 'd':
                angka = 1;
                break;
            case 'E': case 'e':
                angka = 0;
                break;
            default:
                angka = 0;
                break;
            }
            totalNilai += angka * jam;
            totalJam += jam;

        }

        float ips = (float)totalNilai / totalJam;
        printf("IPS (Indeks Prestasi Semster) Anda adalah : %.2f", ips);
    }