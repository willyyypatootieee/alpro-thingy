    #include <stdio.h>

    void main() {
        int hari;

        printf("Masukkan hari (1-7): \n");
        scanf("%d", &hari);


        switch (hari)
        {
            case 1:
                printf("Senin");
                break;

            case 2:
                printf("Selasa");
                break;

            case 3:
                printf("Rabu");
                break;

            case 4:
                printf("Kamis");
                break;

            case 5:
                printf("Jumat");
                break;

            case 6:
                printf("Sabtu");
                break;

            case 7:
                printf("Minggu");
                break;

            default: printf("DI Luar Jangkauan");
                break;
        }
    }