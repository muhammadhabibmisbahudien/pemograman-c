#include <stdio.h>

int main(void)
{
    printf("Program Keliling/Luas Persegi Panjang\n");

    // variabel nilai
    int panjang, lebar, alas, tingi;
    const double phi = 3.14;
    double kel, luas;
    int pilMenu;
    printf("Menu Bangun Datar :\n");
    printf("1. Keliling Persegi Panjang\n");
    printf("2. Luas Persegi Panjang\n");
    printf("3. Keliling Segitiga\n");
    printf("4. Luas Segitiga\n");
    printf("Masukkan Pilihan (1-4) :");
    scanf("%d", &pilMenu);

    switch (pilMenu)
    {
    case 1:
        printf("Keliling Persegi Panjang \n");
        printf("Masukkan Panjang :");
        scanf("%d", &panjang);
        printf("Masukkan Lebar :");
        scanf("%d", &lebar);
        printf("Keliling Persegi Panjang : 2*(%d + %d) = %f", panjang, lebar, 2 * (panjang + lebar));
        break;
    case 2:
        printf("Luas Persegi Panjang\n");
        printf("Masukkan Panjang :");
        scanf("%d", &panjang);
        printf("Masukkan Lebar :");
        scanf("%d", &lebar);
        printf("Luas Persegi Panjang: %d * %d = %f", panjang, lebar, panjang * lebar);
        break;
    default:
        printf("Menu tidak ada!");
    }
    return 0;
}
